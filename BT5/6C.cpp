#include<iostream>
using namespace std;

int UCLN(int a, int b)
{
	if(a == b) return a;
	if(a > b) return UCLN(a-b, b);
	return UCLN(a, b-a);
}

int main()
{
	int a, b;
	cout << "Nhập 2 số nguyên a và b: \n";
	cin >> a >> b;
	if(UCLN(a, b) == 1) cout << "2 số nguyên tố cùng nhau!\n";
	else cout << "UCLN(a, b) = " << UCLN(a, b);

	return 0;
}