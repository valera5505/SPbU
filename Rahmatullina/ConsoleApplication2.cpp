// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{   int a;
	cout<<"������� ������ �����"<<endl;
    cin>>a;
	cout<<"������� ����"<<endl;
	char z;
	cin>>z;
	int b;
	cout<<"������� ������ �����"<<endl;
	cin>>b;
	int c;
	if (z=='+') c=a+b;
	if (z=='*') c=a*b;
	if (z=='-') c=a-b;
    if (z=='/') c=a/b;
	if (z=='%') c=a%b;
	cout<<"c="<<c;
   
    return 0;
}

