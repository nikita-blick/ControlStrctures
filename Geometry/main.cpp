#include <iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB
//#define ROMB2
//#define ROMB3
#define Plus_Minus


void main()
{
	setlocale(LC_ALL, "Russian");
	int n; //размер фигуры
	cout << "Введите размер фигуры: "; cin >> n;
	
	#ifdef SQUARE
	
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2

	for (int i = 0; i < n; i++) // 2. этот цикл повторяет вывод строки
	{
		for (int j = i; j < n; j++)  //1. этот цикл повторяет вывод "*" на экран( формирует строку из *)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4

	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << "  ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}

		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef ROMB

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		cout << "/";

		for (int j = 1; j < (2 * i - 1); j++)
		{
			cout << " ";
		}
		cout << "\\";
		cout << endl;



		// пытался сделать нижнюю половину, не получилось


	}

#endif // ROMB

#ifdef  Plus_Minus

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");

		

		}
		cout << endl;
	}
#endif //  Plus_Minus

#ifdef ROMB2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i*2; j++)cout << " "; cout << "\\";
		cout << endl;

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0-1; j < i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - i -1) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMB2

#ifdef ROMB3


	for (int i = 0; i < n*2; i++)   //высота
	{
		for (int j = 0; j < n*2; j++)   // ширина 
		{
			if (i + n  == j || j +n == i)cout << "\\";
			else if (i == n - 1 - j || i == n*2- j+ n-1 )cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif // ROMB3







}
