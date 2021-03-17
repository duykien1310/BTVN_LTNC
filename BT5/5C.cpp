#include<iostream>
using namespace std;

int SNT(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i < n; i++)
	{
		if(n % 2 == 0) return 0;
	}
	return 1;
}

int main()
{
	int N;
	cout << "Nhập giá trị N: ";
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		if(SNT(i) == 1) cout << i << " ";
	}

	return 0;
}