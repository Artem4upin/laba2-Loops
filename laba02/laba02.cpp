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
	double Si; // Концентрация кремния

	const double COEF_A = -31000.0; // Константа из формулы A
	const double COEF_B = 12.152; // Константа из формулы B
	const double BASE = 10.0; // Основание степени формулы

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

	Si = startPoint;
	exponent = ((COEF_A / T) + COEF_B);

	cout << "Si\tO" << endl;

	do {
		O = sqrt(pow(BASE, exponent) / Si);
		cout << Si << "\t" << O << endl;
		Si = Si + firstStep;
	} while (Si <= changePoint);

	Si = changePoint + secondStep;

	while (Si <= finishPoint) {
		O = sqrt(pow(BASE, exponent) / Si);
		cout << Si << "\t" << O << endl;
		Si = Si + secondStep;
	}
	
	return 0;
}