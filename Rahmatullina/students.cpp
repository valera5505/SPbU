// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"");
	int i,n;
	typedef struct { int id;union {
		                           struct {char *firstname;};
		                           struct {char *lastname;};
								   struct {char *lessons;};
								   struct {int paper;};
								   ;};}_employer;
	 _employer st1,st2,lt1,lt2,ad1,ad2;
	 st1.id=1;
	 st2.id=2;
	 lt2.id=2;
	 lt1.id=1;
	 ad2.id=2;
	 ad1.id=1;
	 
	 st1.firstname="����\0";
	 st2.firstname="�����\0";
	 
	 lt1.lessons ="����������\0";
	 lt2.lessons="�������\0";
	 ad1.paper=506;
	 ad2.paper=327;
	 cout << "��������"<< endl;
	 cout << st1.id  << " " << st1.firstname << endl;
	 cout << st2.id << " " << st2.firstname << endl;
	 cout << "�����" << endl;
	 cout <<lt1.id <<  " " << lt1.lessons << endl;
	 cout <<lt2.id << " " << lt2.lessons << endl;
	 cout << "���������� �����" << endl;
	 cout << ad1.id << " " << ad1.paper << endl;
	 cout << ad2.id << " " << ad2.paper << endl;

	 system("pause");
	  return 0;
}