#include<iostream>
#include<string.h>
using namespace std;

int Dao_Nguoc(string a, string b)
{
	int dem = 0;
	if(a.length() == b.length())
	{
		for(int i = 0; i < a.length(); i++)
		{
			if(a[i] == b[a.length() - i - 1])
			{
				dem++;
			}
		}
	}
	if(dem == a.length()) return 1;
	return 0;
}

int main()
{
	cout << Dao_Nguoc("tuan", "naut");
	int n;
	cout << "Nhập số từ trong danh sách: ";
	cin >> n;
	string a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 0; i < n-1; i++)
	{
		if(a[i].length() % 2 != 0)
		{
			for(int j = i+1; j < n; j++)
			{
				
				if(Dao_Nguoc(a[i], a[j]) == 1)
				{
					
					cout << a[i].length() << " " << a[i][a[i].length()/2];
					break;
				}
			}
		}
	}

	return 0;
}