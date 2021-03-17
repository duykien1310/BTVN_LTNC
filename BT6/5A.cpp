#include<iostream>
using namespace std;

long F(int n) { 
   if (n == 0) return 0; 
   if (n == 1) return 1; 
   return F(n-1) + F(n-2); 
}


int main()
{
	int n;
	n = 100;
	cout << F(100);

	return 0;
}

