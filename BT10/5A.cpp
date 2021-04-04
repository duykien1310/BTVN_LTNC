#include <iostream>
using namespace std;
struct test
{
    int *x = new int [10];
};
int main()
{
    test a;
    int *p = new int [10];
    cout << a.x << endl;
    p=a.x;
    cout << p;
    return 0;
}