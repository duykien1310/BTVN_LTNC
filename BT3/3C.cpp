#include<iostream>
#include<sstream>

using namespace std;

bool SoDoiGuong(int x)
{
    ostringstream s;
    s << x;
    string a = s.str();
    for(int i = 0; i < a.length()/2; i++)
    {
        if(a[i] != a[a.length()-i-1]) return false;
    }
    return true;
}

int main()
{
	int T;
	cout << "Nhập T: ";
	cin >> T;
	int a;
	int b;
    
	for(int i = 0; i < T; i++)
	{
        int count = 0;
		cout << "Nhập a và b: \n";
		cin >> a >> b;
        for(int j = a; j <= b; j++)
        {
            if(SoDoiGuong(j)) count++;
        }
        cout << count << endl;
	}

	return 0;
}
