#include <iostream>
#include <cstdlib>
using namespace std;

static int a, b; 
class SEG
{
public: int x, y;
SEG (int, int);
~SEG ();
void put();
};


SEG::SEG (int x, int y)
{
	cout<<"------------------���� � �����������---------------------"<<endl;
	this->x=x;
	this->y=y;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"-----------------����� �� ������������-------------------"<<endl;
}

SEG::~SEG ()
{
	cout<<"-------------------���� � ����������---------------------"<<endl;
	x = 0;
	a = x;
	y = 0;
	b = y;
	cout<<"-----------------����� �� �����������--------------------"<<endl;
};

void SEG::put()
{
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
}

int main()
{
	setlocale(LC_ALL, "");
	cout<<"Enter the number a: "; cin>>a;
	cout<<"Enter the number b: "; cin>>b;
	SEG *ptr = new SEG(a, b);
	delete ptr;
	cout<<"The number x = "; cout<<a<<endl;
	cout<<"The number y = "; cout<<b<<endl;
	
	system("pause");
	return 0;
}

