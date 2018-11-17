#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

#define PI acos(-1)
using namespace std;

void hamTinhSin(int x);
double giaiThua(int e);
double phanSo(int x, int n);

int main()
{
	int e, x;

	do
	{
		cout << "nhap so tu nhien x : ";
		cin >> x;
		//cout << "giai thua : " << giaiThua(x);
		hamTinhSin(x);
		cout << "\ntiep tuc chuong trinh nhan phim 1 sau do enter : dung chuong trinh nhan phim 0 : ";
		cin >> e;
	} while (e == 1);

	return 0;
}

void hamTinhSin(int x) {
	float c = 0.0001;
	int n = 1;
	float sinX = x/giaiThua(0);
	while (abs(phanSo(x, n)) <= c)
	{
		sinX += hypot(-1, n)* phanSo(x, n);
		n++;
	}

	cout << "SinX = " << sinX << endl;
	cout << PI << endl;
	cout << "math SinX = " << (float)sin(x*PI / 180) << endl;
	
}

double phanSo(int x, int n) {
	return hypot(x, 2 * n + 1) / giaiThua(2*n+1);
}

double giaiThua(int e) {
	double n = (double)e;
	if (n == 0)
	{
		return 1;
	}
	for (int i = 1; i < e; i++)
	{
		n = n*(e - i);
	}
	return n;
}