#include<iostream>
using namespace std;
using std::cin;
using std::endl;


void main()
{
	setlocale(LC_ALL, "");

	int number; 
	cout << "Введите номер автобусного билета: "; cin >> number;
	int sum_1 = 0;
	int sum_2 = 0;

	while (number > 1000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number > 0) 
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << endl;
	cout << sum_2 << endl;
	if (sum_1 == sum_2)
		cout << "Вам повезло" << endl;
	else
		cout << "Вам не повезло" << endl;

	
}
