#include<iostream>
#include<conio.h>
using namespace std;

#define Escape      27

void main()
{ 
	setlocale(LC_ALL, "");


	char key;
	do
	{
		key = _getch();

		if (key == 119 || key == 'W')
		{
			cout << "�������� ������." << endl;
		}
		else if (key == 115 || key == 'S')
		{
			cout << "�������� �����." << endl;
		}
		else if (key == 97 || key == 'A')
		{
			cout << "�������� �����." << endl;
		}
		else if (key == 100 || key == 'D')
		{
			cout << "�������� ������." << endl;
		}
		else if (key == 32)
		{
			cout << "������." << endl;
		}
		else if (key == Escape)
		{
			cout << "�����." << endl;
		}
		else if (key == 114)
		{
			cout << "�����������." << endl;
		}
		else 
		{
			cout << "������." << endl;
		}


	} while (key != Escape);
}

