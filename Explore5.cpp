
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


int main() {
    Point a(3,9);
    Point b(4.5, 7.8);
    cout << "a";
    PrintPoint(a);
    cout << "b";
    PrintPoint(b);
    return 0;
}


