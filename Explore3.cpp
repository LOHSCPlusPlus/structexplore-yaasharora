
#include <iostream>
using namespace std;
struct Point {
	double x;
	double y;
	Point();
	Point(double xVal, double yVal);

};
Point::Point() {
	// Normally, you do not print in a constructor
	cout << "In the default constructor" << endl;
	x = 0;
	y = 0;
}

Point::Point(double xVal, double yVal) {
	// Normally, you do not print in a constructor
	cout << "In the other constructor" << endl;
	x = xVal;
	y = yVal;
}

int main() {
	cout << "Creating a at 3, 15" << endl;
	Point a(3,5);
	cout << "Creating b with default" << endl;
	Point b;

	cout << "Point a: x = " << a.x << ", y = " << a.y << endl;
	cout << "Point b: x = " << b.x << ", y = " << b.y << endl;

	return 0;
}


