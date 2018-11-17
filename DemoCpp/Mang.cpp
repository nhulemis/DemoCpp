#include "stdafx.h"
#include <iostream>

using namespace std;

int *getMang(int &n, int i) {
	//const int x = 10;
	if (i == 1)
	{
		static int a[] = { 1,2,3,4};
		n = sizeof(a) / sizeof(int);
		return a;
	}
	static int b[] = { 5,6,7,8 };
	n = sizeof(b) / sizeof(int);
	return b;
}

int timSoLonNhat(int n, int a[]) {
	auto max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "max : " << max << endl;
	return max;
}

void sapXepLonBe(int n, int *a) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				auto temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

void sapXepBeLon(int n, int *a) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				auto temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

void xuat(int n, int a[]) {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl << endl;
}

void soCapPhanTuBangNhau(int n, int *a) {
	int tong = 0;
	for (int i = 0; i < n - 2; i++)
	{
		if (a[i] == a[i + 1] && a[i] == a[i + 2])
		{
			tong++;
		}
	}
	cout << tong << endl;
}

void soLonThuHai(int n, int *a) {
	auto max = timSoLonNhat(n, a);
	int so2 = a[0];

	int vitri = 0, soLan = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > so2 && a[i] < max)
		{
			so2 = a[i];
			vitri = i;
		}
		if (a[i] == so2)
		{
			soLan++;
		}
	}
	if (soLan == n)
	{
		cout << "khong co so lon nhat" << endl;
		return;
	}
	cout << "so lon thu hai : " << so2 << " - " << vitri + 1 << endl;
}

void nhap(int &b, int &c) {
	cin >> b >> c;
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
}

void tinhTrungBinhCong(int n, int *a, int b, int c) {
	int tong = 0, tb = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] >= b && a[i] <= c)
		{
			tong += a[i];
			tb++;
		}
	}
	cout << "trung binh cong : " << (float)tong / tb << endl;
}

void chenMangIntoMang(int &N, int *a, int M, int *b,int index) {
	
	for (int i = N-1; i >= index; i--)
	{
		a[i+M] = a[i];		
	}
	N += M;	
	for (int i = 0;i<M; i++)
	{
		a[i+index] = b[i];
	}

}

int main() {
	int n = 10,m;
	int *a = getMang(n,1);
	int *B = getMang(m,0);
	//timSoLonNhat(n,a);
	xuat(n, a);
	/*sapXepLonBe(n, a);
	xuat(n, a);
	sapXepBeLon(n, a);*/
	//soCapPhanTuBangNhau(n, a);
	xuat(m, B);
	//soLonThuHai(n, a);
	int b, c;
	//nhap(b, c);

	//tinhTrungBinhCong(n, a, b, c);
	int index;
	cin >> index;
	chenMangIntoMang(n, a, n, B, index);
	xuat(n, a);
	system("pause");
	return 0;
}