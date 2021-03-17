#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhập n: ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = -n+1; j < n; j++)
		{
			if(i + j >= 0 && i + j <= 2*i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}