#include<iostream>
//#include<string.h>
using namespace std;

int main()
{
	string s;
	cout << "Nhập xâu: ";
	cin >> s;
	int dem = 0;
	for(int i = 0; i <= s.length()/2 - 1; i++)
	{
		if(s[i] == s[s.length() - i - 1])
		{
			dem++;
		}
	}
	if(dem == s.length()/2) cout << "YES";
	else cout << "NO";
	return 0;
}