#include <iostream>
using namespace std;

int main() {
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int deta,detb, detc;
	cout<<"Enter matrix A\n";
	for (int i=0; i<2; i++)
	for (int j=0; j<2; j++)
	cin>>a[i][j];
	cout<<"Enter matrix B\n";
		for (int i=0; i<2; i++)
	for (int j=0; j<2; j++)
	cin>>b[i][j];
	c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
	c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
	c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
	c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
	deta=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
	detb=(b[0][0]*b[1][1])-(b[1][0]*b[0][1]);
	detc=(c[0][0]*c[1][1])-(c[1][0]*c[0][1]);
	cout<<"det a=\n"<<deta<<endl<<"detb=\n"<<detb<<endl<<"detc=\n"<<detc<<endl;
	for (int i=0; i<2; i++)
	{for (int j=0; j<2; j++)
	cout<<c[i][j];
	cout<<endl;
	}
	// your code goes here
	return 0;
}
