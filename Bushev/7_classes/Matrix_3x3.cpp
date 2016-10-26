#include <iostream>
#include <vector>

using namespace std;

class Matrix{
public:
	int size;
	vector<vector<int>> vals;

	Matrix(int size){
		this->size = size;

		vals.resize(size);
		for(int i = 0; i < size; i++) vals[i].resize(size);
	}

	void det(){
		if(size < 1){
			cout << "���������� ��������� det �������..." << endl;
		}else{
			cout << "det ����� �������: ";

			if(size == 1) cout << vals[0][0];
			else if(size == 2) cout << vals[0][0] * vals[1][1] - vals[0][1] * vals[1][0];
			else if(size == 3) 
				cout << vals[0][0] * vals[1][1] * vals[2][2] 
				+ vals[2][0] * vals[0][1] * vals[1][2] 
				+ vals[0][2] * vals[1][0] * vals[2][1] 

				- vals[0][2] * vals[1][1] * vals[2][0]
				- vals[2][2] * vals[1][0] * vals[0][1]
				- vals[0][0] * vals[2][1] * vals[1][2]; // sry for this

			cout << endl;
		}
	}
};

ostream& operator<<(ostream& a, Matrix m){
	if(m.size < 1) return a;

	cout << "�������: " << endl;

	for(int i = 0; i < m.size; i++){
		for(int j = 0; j < m.size; j++){
			a << m.vals[i][j] << " ";
		}

		cout << endl;
	}

	cout << endl;

	return a;
}

istream& operator>>(istream& a, Matrix &m){
	if(m.size < 1) return a;

	cout << "������� " << m.size*m.size << " ���������: ";

	for(int i = 0; i < m.size; i++){
		for(int j = 0; j < m.size; j++){
			a >> m.vals[i][j];
		}
	}

	return a;
}

Matrix operator+(Matrix a, Matrix b){
	Matrix *c = new Matrix(0);

	if(a.size != b.size || a.size == 0){
		cout << "���������� ������� ������ �������" << endl;
	}else{
		c = new Matrix(a.size);
		c->size = a.size;

		for(int i = 0; i < a.size; i++){
			for(int j = 0; j < b.size; j++){
				c->vals[i][j] = a.vals[i][j] + b.vals[i][j];
			}
		}
	}

	return *c;
}

Matrix operator-(Matrix a, Matrix b){
	Matrix *c = new Matrix(0);

	if(a.size != b.size || a.size == 0){
		cout << "���������� ������� ������ �������" << endl;
	}else{
		c = new Matrix(a.size);
		c->size = a.size;

		for(int i = 0; i < a.size; i++){
			for(int j = 0; j < a.size; j++){
				c->vals[i][j] = a.vals[i][j] - b.vals[i][j];
			}
		}
	}

	return *c;
}

Matrix operator*(Matrix a, Matrix b){
	Matrix *c = new Matrix(0);

	if(a.size != b.size || a.size == 0){
		cout << "���������� ����������� ������ �������" << endl;
	}else{
		c = new Matrix(a.size);
		c->size = a.size;

		for(int i = 0; i < a.size; i++){
			for(int j = 0; j < a.size; j++){
				for(int k = 0; k < a.size; k++){
					c->vals[i][j] += a.vals[i][k] * b.vals[k][j];
				}
			}
		}
	}

	return *c;
}

int main(){
	setlocale(0, "");

	int s1, s2;

	cout << "������� ������ ������: ";
	cin >> s1 >> s2;

	Matrix a(s1), b(s2);
	cin >> a >> b;
	cout << endl << a << b;
	
	cout << "a - b: = ";
	cout << a - b << "a + b: = ";
	cout << a + b << "a * b: = ";
	cout << a * b << endl;

	a.det();
	b.det();

	cout << endl;
	system("pause");

	return 0;
}