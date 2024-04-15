#include <iostream>
#include "Point.h"

void main() {
	Point p(0.25f, 0.5f);
	std::cout << "Point located at x=" << p.getX() << " y=" << p.getY() << std::endl;
}