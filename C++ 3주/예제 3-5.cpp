#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show();
};

Point::Point() : x(0), y(0) {}
Point::Point(int a, int b)
	: x(a), y(b) {}

void Point::show() {
		cout << "(" << x << "," << y << ")" << endl;
}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}