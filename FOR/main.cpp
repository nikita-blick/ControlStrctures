#include<iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define Simple_Numbers
#define Pimple_Numbers

void main()
{
	setlocale(LC_ALL, "Russian");


	/* for (;;)
	{
		cout << "Hello FOR";
	} */

	/* int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	} */

#ifdef FACTORIAL

	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << "\t";
	}
#endif // ASCII

#ifdef FIBONACCI

	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;

	cout << "������� ���������� ������ ����: "; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
		cout << a << "\t";
	cout << endl;

#endif // FIBONACHI


#ifdef Simple_Numbers



	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; // ���������� ������������ ��� ����� �������, 
		//�� ��� ����� ���������: 
		for (int j = 2; j < sqrt(i); j++)
		{
			
			if (i % j == 0) 
			{
				simple = false;
				break; //�������� ����� 'break' ��������� ������� ��������, � ��� ����������� �������� �����.
			}
		}

		if(simple)cout << i << "\t";
	}
	cout << endl;

#endif // Simple_Numbers


#ifdef Pimple_Numbers



	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		//bool perfect = true; //��������� ��� ����� �����������, �� ��� ����� ���������
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)sum += j;
		}
		//if (sum == i)perfect = true;
		if (sum == i)cout << i << "\t";
	}
	cout << endl;

#endif // Pimple_Numbers


}
