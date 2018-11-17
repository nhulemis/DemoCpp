#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void soChan(int n) {
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << ", ";
		}
	}
}

void soLe(int n) {
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << ", ";
		}
	}
}

int UCLN(int a, int b) {

	for (int i = a/2+1; i >=0; i--)
	{
		if (a % i == 0 && b% i == 0)
		{
			//cout << i;

			return i;
		}
	}
}

double BCNN(int a, int b) {
	return a*b / UCLN(a, b);
}



int main()
{
	/*int n;
	cout << "nhap vao so tu nhien n :";
	cin >> n;
	cout << "cac so chang :";
	soChan(n);
	cout << "\ncac so le :";
	soLe(n);*/

	int a, b;
	cout << "nhap 2 so tu nhien n :";
	cin >> a >> b;
	cout << "UCLN : " << UCLN(a, b)<<endl;
	cout << "BCNN : " << BCNN(a, b) << endl;


	return 0;
}