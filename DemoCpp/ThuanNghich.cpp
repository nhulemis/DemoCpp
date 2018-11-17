#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void giaiPhauSo(int n) {
	int soMoi = 0, soCu = n;

	int tong = 0;
	while (n > 0)
	{
		int sodu = n % 10;
		tong += sodu;
		soMoi = (soMoi * 10 + sodu);
		n /= 10;
	}
	if (soMoi == soCu && tong % 10 == 0)
	{
		cout << soCu << "  ";
		
	}
	
}

void soThuanNghich() {
	for (int i = 100000; i < 999999; i++)
	{
		giaiPhauSo(i);
	}
}

int main()
{
	int e, n;

	do
	{
		//cout << "nhap so tu nhien n : ";
		//cin >> n;
		// giaiPhauSo(n);
		

		soThuanNghich();
		cout << "\ntiep tuc chuong trinh nhan phim 1 sau do enter : dung chuong trinh nhan phim 0 : ";
		cin >> e;
	} while (e == 1);

	return 0;
}