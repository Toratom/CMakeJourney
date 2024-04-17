#include <mediumProject/point.h>

Point::Point(double x, double y) {
	setX(x);
	setY(y);
}

void Point::setX(double x) {
	p(0) = x;
}

void Point::setY(double y) {
	p(1) = y;
}

double Point::getX() const {
	return p(0);
}

double Point::getY() const {
	return p(1);
}