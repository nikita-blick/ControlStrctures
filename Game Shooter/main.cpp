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
			cout << "Движение вперед." << endl;
		}
		else if (key == 115 || key == 'S')
		{
			cout << "Движение назад." << endl;
		}
		else if (key == 97 || key == 'A')
		{
			cout << "Движение влево." << endl;
		}
		else if (key == 100 || key == 'D')
		{
			cout << "Движение вправо." << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок." << endl;
		}
		else if (key == Escape)
		{
			cout << "Выход." << endl;
		}
		else if (key == 114)
		{
			cout << "Перезарядка." << endl;
		}
		else 
		{
			cout << "Ошибка." << endl;
		}


	} while (key != Escape);
}

