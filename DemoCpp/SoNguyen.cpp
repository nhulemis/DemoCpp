#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void kiemTraChangLe(int input);

void kiemTraAmDuong(int input) {
	if (input > 0)
	{
		cout << "So duong" << endl;
	}
	else
	{
		cout << "So am" << endl;
	}
}

int main() {
	int input;
	cout << "Nhap tu nhien n : ";
	cin >> input;
	kiemTraChangLe(input);
	kiemTraAmDuong(input);
	return 0;
}

void kiemTraChangLe(int input) {
	if (input % 2 == 0)
	{
		cout << "La so chan" << endl;
	}
	else
	{
		cout << "La so le" << endl;
	}
}