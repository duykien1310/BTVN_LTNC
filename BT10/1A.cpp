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

int main()
{
	Point A(3, 5);
	Point B;
	B.x = 1;
	B.y = 3;
	A.print(A);
	cout << endl;
	B.print(B);
	return 0;
}