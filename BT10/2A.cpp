#include <iostream>
using namespace std;

struct Point
{
    double x, y;
    Point() {};
    Point (double _x, double _y) : x(_x) , y(_y){};
    void print (){
        cout << "Toa do x: " << x << endl;
        cout << "Toa do y: " << y << endl;
    }
};

void ThamTri(Point A)
{
    cout << "Dia chi khi tham tri: " << &A << endl;
}

void ThamChieu(Point &A)
{
    cout << "Dia chi khi tham chieu: " << &A << endl;
}

int main()
{
    Point A(2, 3);
    A.print();
    cout << "Dia chi tai main: " << &A << endl;
    ThamTri(A);
    ThamChieu(A);
    return 0;
}