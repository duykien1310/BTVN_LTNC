#include<iostream>
using namespace std;

int DeQuy(int a[], int n)
{
	int dem = 0;
	
	for (int i = 0; i < (n); ++i)
	{
		/* code */dem++;
		DeQuy(a, n);
	}
	return dem;
}

int main()
{
	int n;
	cout << "Nhập n: ";
	cin >> n;
	int a[n];
	cout << "\n" << DeQuy(a, n);



	return 0;
}