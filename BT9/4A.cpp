#include<iostream>
using namespace std;

int *a;
int main()
{
    
    int b=10;
    a=&b;
    delete a; //Loi: Không được thu hồi nếu ko cấp phát động.
    return 0;
}