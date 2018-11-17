#include "stdafx.h"
#include <iostream>

using namespace std;

int tong(int a, int b);
int hieu(int a, int b);
float thuong(int a, int b);
double tich(int a, int b);

int main() {
	int a, b;
	cout << " nhap 2 so a b : ";
	cin >> a >> b;
	cout << a << " + " << b << " = " << tong(a, b) << endl;
	cout << a << " - " << b << " = " << hieu(a, b) << endl;
	cout << a << " / " << b << " = " << thuong(a, b) << endl;
	cout << a << " x " << b << " = " << tich(a, b) << endl;
}
int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b) {
	return a - b;
}
float thuong(int a, int b) {
	return (float)a / b;
}
double tich(int a, int b) {
	return (double)a*b;
}