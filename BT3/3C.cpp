#include<iostream>
using namespace std;

int SoDoiGuong(string x)
{
	int dem = 0;
	int n = x.length();
	for(int i = 0; i <= n/2 - 1; i++)
	{
		if((int)x[i] - 48 == (int)x[n-i-1] - 48)
		{
			dem++;
		}
	}
	if(dem == n/2) return 1;
	return 0;
}

int main()
{
	int T;
	cout << "Nhập T: ";
	cin >> T;
	int a;
	int b;
	int dem = 0;
	for(int i = 0; i < T; i++)
	{
		cout << "Nhập a và b: \n";
		cin >> a >> b;
		
	}

	return 0;
}