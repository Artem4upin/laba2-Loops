/****************************************
* Автор:   Чупин Артем				    *
* Задание: Циклы с пред- и постусловием *
* Вариант: 6							*
*****************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double T = 1873.0; // Температура
	double firstStep = 0.025, secondStep = 0.1; // Первый и второй шаг
	double startPoint = 0.025, changePoint = 0.1, finishPoint = 0.7; // Точки начала, смены шага, конца
	double exponent; // Степень для расчетов результата
	double O; // Результат - содержание кислорода в стали после окисления
	double silicoСoncentration; // Концентрация кремния

	cout << "T = ";
	cin >> T;

	cout << "start point = ";
	cin >> startPoint;

	cout << "change point = ";
	cin >> changePoint;

	cout << "finish point = ";
	cin >> finishPoint;

	cout << "first step = ";
	cin >> firstStep;

	cout << "second step = ";
	cin >> secondStep;

	silicoСoncentration = startPoint;
	exponent = ((-31000.0 / T) + 12.152);

	cout << "Si\tO" << endl;

	do {
		O = sqrt(pow(10.0, exponent) / silicoСoncentration);
		cout << silicoСoncentration << "\t" << O << endl;
		silicoСoncentration = silicoСoncentration + firstStep;
	} while (silicoСoncentration <= changePoint);

	silicoСoncentration = changePoint + secondStep;

	while (silicoСoncentration <= finishPoint) {
		O = sqrt(pow(10.0, exponent) / silicoСoncentration);
		cout << silicoСoncentration << "\t" << O << endl;
		silicoСoncentration = silicoСoncentration + secondStep;
	}
	
	return 0;
}