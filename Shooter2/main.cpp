#include<iostream>	
#include<conio.h>

using namespace std;
#define Enter      13
#define Escape     27
#define UpArrow    72
#define DownArrow  80
#define LeftArrow  75
#define RightArrow 77

//#define shooter_IF

void main()
{
	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
#ifdef shooter_IF
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S' || key == DownArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LeftArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RightArrow)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else if (key == Escape)
		{
			cout << "�����" << endl;
		}
		else
		{
			if (key != -32) cout << "Error" << endl;
		}

	} while (key != Escape);
#endif

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow: 
		case 'W': 
		case 'w': cout << "������" << endl;  break;

		case DownArrow:
		case 'S': 
		case 's': cout << "�����" << endl;  break;

		case LeftArrow: 
		case 'A': 
		case 'a': cout << "�����" << endl;  break;

		case RightArrow: 
		case 'D': 
		case 'd': cout << "������" << endl;  break;
		
		case ' ': cout << "������" << endl;  break;
		case Enter: cout << "�����" << endl;  break;
		case Escape:
		case -32:break;
		default:  cout << "Error" << endl;
		}
	} while (key != Escape);




}


