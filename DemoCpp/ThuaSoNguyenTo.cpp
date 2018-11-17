#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool soNguyenTo(int n) {
	if (n < 2)
	{
		return false;
	}
	if (n == 2)
	{
		return true;
	}
	for (int i = 2; i <= n / 2 + 1; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

void thuaSoNguyenTo(int n) {
	if (n <= 3)
	{
		if (n == 1)
		{
			return;
		}
		cout << n;
		return;
	}
	int temp = n;
	for (int i = 2; i <= temp; i++)
	{
		if (soNguyenTo(i) && temp%i == 0)
		{
			temp = temp / i;
			cout << i << " ";
			break;
		}
	}
	thuaSoNguyenTo(temp);
}

int main()
{
	int n;
	cout << "nhap so nguyen n ";
	cin >> n;
	thuaSoNguyenTo(n);
	cout << endl;
	system("pause");
	return 0;
}