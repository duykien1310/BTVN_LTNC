#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	cout << "Nhập n: ";
	cin >> n;
	cout << "Số ngẫu nhiên nhỏ hơn n: " << rand() % n;
	return 0;
}