#include<iostream>
using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;	//Loi: Vì con trỏ p2 chỉ vào p nên không được delete p.
    *p2 = 100;
    cout << *p2;
    delete p2;

    return 0;
}