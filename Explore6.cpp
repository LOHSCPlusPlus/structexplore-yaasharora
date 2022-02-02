
#include <iostream>
using namespace std;
struct Point {
	double x;
	double y;
	Point();
	Point(double xVal, double yVal);

};
Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double xVal, double yVal) {
	x = xVal;
	y = yVal;
}

void PrintPoint(Point p) {
    cout << ": x = " << p.x << ", y = " << p.y << endl;
}

void SwapXY(Point &p) {
	double temp = p.x;
	p.x = p.y;
	p.y = temp;
}

int main() {
    Point a(3,9);
    cout << "a";
    PrintPoint(a);
	SwapXY(a);
	cout << "a after calling SwapXY" << endl;
    PrintPoint(a);
    return 0;
}


