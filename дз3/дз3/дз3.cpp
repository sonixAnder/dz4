#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	float s, price1, price2, price3, fc, totalSum1,
		totalSum2, totalSum3;

	cout << "------------------" << endl;
	cout << "Дистанция(в км): ";
	cin >> s;

	cout << "Цена Супер бензина: ";
	cin >> price1;

	cout << "Цена Супер Плюс бензина: ";
	cin >> price2;

	cout << "Цена дизеля: ";
	cin >> price3;

	cout << "Расход топлива: ";
	cin >> fc;

	totalSum1 = s * price1 * fc / 100;
	totalSum2 = s * price2 * fc / 100;
	totalSum3 = s * price3 * fc / 100;

	cout << "------------------" << endl;
	cout << "Итог" << endl;
	cout << "------------------" << endl;
	cout << "|Бренд топилва|Стоимость поездки|\n";
	cout << "Супер\t\t" << totalSum1 << "\n";
	cout << "Супер плюс\t" << totalSum2 << "\n";
	cout << "Дизель\t\t" << totalSum3 << "\n";
	cout << "------------------" << endl;

	return 0;
}