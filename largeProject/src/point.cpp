#include <mediumProject/point.h>

Point::Point(float x, float y) {
	setX(x);
	setY(y);
}

void Point::setX(float x) {
	p.x = x;
}

void Point::setY(float y) {
	p.y = y;
}

float Point::getX() const {
	return p.x;
}

float Point::getY() const {
	return p.y;
}