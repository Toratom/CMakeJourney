#include <iostream>
#include <mediumProject/point.h>
#include <mediumProject/matrix.h>

void main() {
	Point p(0.5, 0.75);
	std::cout << "Point located at x=" << p.getX() << " y=" << p.getY() << std::endl;
	Vec2 vec({ 0.25, 0.5 });
	std::cout << vec << std::endl;
}