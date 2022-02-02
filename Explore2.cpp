
#include <iostream>
using namespace std;
struct Point {
	double x;
	double y;
	Point();
};
Point::Point() {
	// Normally, you do not print in a constructor
	cout << "In the constructor" << endl;
	x = 0;
	y = 0;
}

int main() {
	cout << "Creating a" << endl;
	Point a;
	cout << "Creating b" << endl;
	Point b;

	cout << "Point a: x = " << a.x << ", y = " << a.y << endl;
	cout << "Point b: x = " << b.x << ", y = " << b.y << endl;

	return 0;
}


