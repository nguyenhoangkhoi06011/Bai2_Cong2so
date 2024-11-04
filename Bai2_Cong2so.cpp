#include <iostream>
using namespace std;
int main() {
	cout << "CHUONG TRINH TINH CAC PHEP TINH CO BAN\n";
	double so1, so2, tong, hieu, tich, thuong;
	cout << "nhap so1:"; cin >> so1;
	cout << "Nhap so2:"; cin >> so2;
	tong = so1 + so2;
	hieu = so1 - so2;
	tich = so1 * so2;
	thuong = so1 / so2;
	cout << " tong:" << so1 << "+" << so2 << "=" << tong << endl;
	cout << " hieu:" << so1 << "-" << so2 << "=" << hieu << endl;
	cout << "tich:" << so1 << "*" << so2 << "=" << tich << endl;
	cout << "thuong:" << so1 << "/" << so2 << "=" << thuong << endl;
	
	return 0;
}