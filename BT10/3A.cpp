#include<iostream>
using namespace std;

struct Point
{
	int x;
	int y;
	Point () {}
	Point (int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	void print(Point a)
	{
		cout << "(" << a.x << ", " << a.y << ")";
	}
};

Point mid_point(Point A, Point B)
{
	Point C;
	C.x = (A.x + B.x)/2;
	C.y = (A.y + B.y)/2;
	return C;
}

int main()
{
	Point A(3, 5);
	Point B;
	B.x = 1;
	B.y = 3;
	A.print(A);
	cout << endl;
	B.print(B);
	cout << "(" << mid_point(A, B).x << ", " << mid_point(A, B).y << ")" ;

	return 0;
}