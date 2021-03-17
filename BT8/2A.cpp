#include<iostream>
using namespace std;



int main()
{
	// a
	char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   } 

   //b
   int *x = new int[2];
   cout << endl << "&a[0] = " << &(*x) << endl;
   cout << "&a[1] = " << &*(x+1) << endl;
   // ==> sizeOf Int = độ chênh lệch giá trị 2 con trỏ 

   //c
   double *y = new double[2];
   cout << endl << "&a[0] = " << &(*y) << endl;
   cout << "&a[1] = " << &*(y+1) << endl;
   // ==> sizeOf Double = độ chênh lệch giá trị 2 con trỏ 

   //c
   char b[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   } 


	return 0;
}