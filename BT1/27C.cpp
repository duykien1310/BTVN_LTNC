#include<iostream>
using namespace std;

int main()
{
	while(1)
	{
		int N;
		cout << "Nhập số N: ";
		cin >> N;
		if(N >= 0 && N % 5 == 0) cout << N/5 << endl;
		else
		{
			cout << -1 << "\n\tBye!\n";
			break;
		}
	}
	return 0;
}