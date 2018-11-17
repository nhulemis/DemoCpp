#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void fillHinhChuNhat(int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void drawHinhChuNhat(int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i != 0 && i != n - 1)
			{
				if (j == 0 || j == m - 1)
				{
					cout << "* ";
				}
				else
					cout << "  ";
			}
			else
			{
				cout << "* ";
			}			
		}
		cout << endl;
	}
}

void fillTamGiacVuong(int h) {
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void fillTamGiacCan(int h) {
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < h-i; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < 2*i+1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
int main()
{
	int e, n, m,h;

	do
	{
		cin >> n >> m >> h;
		fillHinhChuNhat(n, m);
		cout << endl;
		drawHinhChuNhat(n, m);
		cout << endl;
		fillTamGiacVuong(h);
		cout << endl;
		fillTamGiacCan(h);
		cout << "\ntiep tuc chuong trinh nhan phim 1 sau do enter : dung chuong trinh nhan phim 0 : ";
		cin >> e;
	} while (e == 1);

	return 0;
}