#pragma once
#include <mediumProject/matrix.h>

class Point {
private:
	Vec2 p;

public:
	Point(double x, double y);

	void setX(double x);
	void setY(double y);
	double getX() const;
	double getY() const;
};