#include<iostream>
using namespace std;

int main()
{
	int a[3];
	char b[3];

	for(int i = 0; i < 3; i++)
	{
		cout << "Địa chỉ a[" << i << "] = " << &a[i] << endl;
	}


	for(int i = 0; i < 3; i++)
	{
		cout << "Địa chỉ b[" << i << "] = " << &b[i] << endl;// Không thấy đc địa chỉ
		cout << "Địa chỉ b[" << i << "] = " << (void*)&b[i] << endl;// Không thấy đc địa chỉ
			
	}
	// 

	


	return 0;
}