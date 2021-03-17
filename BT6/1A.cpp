#include<iostream>
using namespace std;

void f(int a[])
{
	cout << "Địa chỉ biến mảng trong hàm: " << &a << endl;
	cout << "Địa chỉ phần tử đầu tiên của mảng trong hàm: " << &a[0] << endl;
}

int main()
{
	int b[10];
	int a[10];
	cout << "Địa chỉ biến mảng trong hàm main: " << &b << endl;
	cout << "Địa chỉ phần tử đầu tiên của mảng trong hàm main: " << &b[0] << endl;
	f(a);

	return 0;
}

// Trong hàm main địa chỉ mảng và phần tử đầu tiên giống nhau
// Trong hàm Địa chỉ mảng và phần tử đầu tiên khác nhau