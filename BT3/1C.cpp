#include<iostream>
using namespace std;

int main()
{
	int N,dem = 0;
	cout << "Nhập số nguyên dương N: ";
	cin >> N;
	int a[N];
	for(int i = 0; i < N; i++)
	{
		cout << "Nhập giá trị a[" << i << "] = ";
		cin >> a[i];
	}

	for(int i = 0; i < N-1; i++)
	{
		for(int j = i+1; j < N; j++)
		{
			if(a[i] == a[j])
			{
				cout << "YES";
				dem++;
				break;
			}
		}
		if(dem > 0) break;
	}
	if(dem == 0) cout << "NO";
	return 0;
}