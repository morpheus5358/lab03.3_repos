// Lab_03_3.cpp
// Мартинюка Денима
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R1; // вхідний параметр 1
	double R2; // вхідний параметр 2
	double y; // результат обчислення виразу
	cout << "R1 = "; cin >> R1;
	cout << "x = "; cin >> x;
	R2 = R1 * 2;
	// розгалуження в повній формі
	if (x <= -6)
		y = R2 / 2;
	else
		if (-6 < x && x <= -2 * R2)
			y = (R2 / 2) + ((0 - (R2 / 2)) / (- 2 * R2 + 6)) * (x + 6);
		else
			if (-2 * R2 < x && x <= 0)
				y = sqrt(pow(R2 , 2) - pow((x - R2), 2));
			else
				if (0 < x && x <= 2 * R1)
					y = sqrt(pow(R1 , 2) - pow((x - R1) , 2));
				else
					y = ((-R1) / (2*R1 + 1 - 2 * R1)) * (x + 6);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
