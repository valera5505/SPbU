// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <dos.h>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	float res;
	int otherres;
	int choice;
	string yesno;
while (yesno != "��-�" || yesno != "���"){
	L1:
	cout << "����� �������� ���������-�, ��������?" << endl
		 <<	"1. �����-� ����������!" << endl
		 <<	"2. ����������-�!" << endl
		 <<	"3. ���� ������� ��������!" << endl
		 <<	"4. ����� ������ �����!" << endl
		 <<	"5. ������� �� ����� ������� ��� �����, ������!" << endl;
	cin >> choice;
	switch(choice){
	case 1:
		cout << "������� ��� �����, ������!" << endl;
		cin >> a >> b;
		res = (float)a + (float)b;
		cout << "����������-�! " << a << " + " << b << ", ��������, ��������� " << res;
		cout << ", ��������! ������ ���� ��� ������!\n ��� �� �� �������? (��-�/���)\n";
		cin >> yesno;
		if (yesno == "��-�") break;
		if (yesno == "���-�") cin >> choice;
	case 2:
		cout << "������� ��� �����, ������!" << endl;
		cin >> a >> b;
		res = (float)a - (float)b;
		cout << "��������-�! " << a << " - " << b << ", ��������, ��������� " << res;
		cout << ", ��������! ������ ���� ��� ������!\n ��� �� �� �������? (��-�/���)\n";
		cin >> yesno;
		if (yesno == "��-�") break;
		if (yesno == "���-�") cin >> choice;
	case 3:
		cout << "������� ��� �����, ������!" << endl;
		cin >> a >> b;
		res = (float)a * (float)b;
		cout << "��������-�! " << a << " * " << b << ", ��������, ��������� " << res;
		cout << ", ���������! ������ ���� ��� ������!\n ��� �� �� �������? (��-�/���)\n";
		cin >> yesno;
		if (yesno == "��-�") break;
		if (yesno == "���-�") cin >> choice;
	case 4:
		cout << "������� ��� �����, ������!" << endl;
		cin >> a >> b;
		res = (float)a / (float)b;
		cout << "�����-�! " << a << " : " << b << ", ��������, ��������� " << res;
		cout << ", ������! ������ ���� ��� ������!\n ��� �� �� �������? (��-�/���)\n";
		cin >> yesno;
		if (yesno == "��-�") break;
		if (yesno == "���-�") cin >> choice;
	case 5:
		cout << "������� ��� �����, ������!" << endl;
		cin >> a >> b;
		otherres = a % b;
		cout << "�������-� �������! " << a << " % " << b << ", ��������, ��������� " << otherres;
		cout << ", ��������! ������ ���� ��� ������!\n ��� �� �� �������? (��-�/���)\n";
		cin >> yesno;
		if (yesno == "��-�") break;
		if (yesno == "���-�") cin >> choice;
		}
	};
	system("pause");
	return 0;
}

