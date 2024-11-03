/*Напишите программу, которая запрашивает два целых числа x и y,
после чего вычисляет и выводит значение x в стпенеи y*/

#include <iostream>
using namespace std;

int main()
{
	double x, y, score = 1;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	for (int i = 0; i < y; i++)
	{
		score *= x;
	}
	cout << score;
}
