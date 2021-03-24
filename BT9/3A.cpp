#include<iostream>
using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;  // Lỗi do không cấp phát mà lại delete.
    cerr << "a after deleting c:" << "-" << a << "-" << endl;// Dòng cerr này chạy ko đc như mong muốn.
    return 0;
}