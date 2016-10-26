#include "stdafx.h"
#include <iostream>

using namespace std;

class Figura
{
public:	
	int x,y,z;
	double s,p;
public:
	Figura(){}
	void P(int p);
	void S(int s);
};

class Circle:public Figura
{
public:
	Circle(int x)
	{
		this->x=x;	
	}
	void P()
	{
		p=x*3.14*2;
		cout<<"�������� ����� ����� "<<p<<"\n";
	}
	void S()
	{
		s=3.14*x*x;
		cout<<"������� ����� ����� "<<s<<"\n";
	}
};

class Kvad:public Figura
{
public:
	Kvad(int y)
	{
		this->y=y;	
	}
	void P()
	{
		p=y*4;
		cout<<"�������� �������� ����� "<<p<<"\n";
	}
	void S()
	{
		s=y*y;
		cout<<"������� �������� ����� "<<s<<"\n";
	}
};

class Tr:public Figura
{
public:
	Tr(int z)
	{
		this->z=z;	
	}
	void P()
	{
		p=z*3;
		cout<<"�������� ������������ ����� "<<p<<"\n";
	}
	void S()
	{
		s=0.5*z*z*0.87;
		cout<<"������� ������������ ����� "<<s<<"\n";
	}
	
};



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"");
	int a,b,c;
	cout<<"������� ������ �����, ����� ������� �������� � ������������ \n";
	cin>>a>>b>>c;
	Circle k(a);
	Kvad i(b);
	Tr j(c);
	k.P();
	k.S();
	i.P();
	i.S();
	j.P();
	j.S();
	system("pause");
	return 0;
}

