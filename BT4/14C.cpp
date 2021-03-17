#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhập số phần tử mảng: ";
	cin >> n;
	int a[n];
	int b[n+1];
	for(int j = 0; j < n; j++)
	{
		cin >> a[j];
	}
	for(int j = 0; j < n+1 ; j++)
	{
		cin >> b[j];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n+1 ; j++)
		{
			if(a[i] == b[j])
			{
				b[j] = -1;
			}
		}
	}
	for(int j = 0; j < n+1 ; j++)
	{
		if(b[j] != -1) cout << b[j];
	}


	return 0;
}