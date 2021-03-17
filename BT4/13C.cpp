#include<iostream>
using namespace std;

int SoSanh(int a[], int n, int vt)
{
	int tong1 = 0, tong2 = 0;
	for(int i = 0; i < vt; i++)
	{
		tong1 += a[i];
	}
	for(int i = n-1; i > vt; i--)
	{
		tong2 += a[i];
	}
	if(tong1 == tong2) return 1;
	return 0;
}

int SherlockArray(int a[], int n)
{
	int tong1 = 0, tong2 = 0;
	for(int i = 0; i < n; i++)
	{
		if(SoSanh(a, n, i) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	cout << "Nhập: \n";
	int T;
	cin >> T;
	int N[T];
	for(int i = 0; i < T; i++)
	{
		cin >> N[i];
		int a[N[i]];
		for(int j = 0; j < N[i]; j++)
		{
			cin >> a[j];
		}
		for(int j = 0; j < N[i]; j++)
		{
			if(SherlockArray(a, N[i]) == 1)
			{
				cout << "YES";
				break;
			}
			if(SherlockArray(a, N[i]) == 0)
			{
				cout << "NO";
				break;
			}

		}
	}



	return 0;
}