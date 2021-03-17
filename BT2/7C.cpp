#include<iostream>
using namespace std;
int main()
{
	cout << "Nhập: \n";
	int x, y ;
	while(1)
	{
		cin >> x;
		if(x != y)
		{
			 cout << x << ". ";
		}
		if(x < 0)
		{
			break;
		}
		y = x;
	}
	return 0;
}