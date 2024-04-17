#include <iostream>
#include <mediumProject/point.h>
#include <glm/vec2.hpp>

void main() {
	Point p(0.5, 0.75);
	std::cout << "Point located at x=" << p.getX() << " y=" << p.getY() << std::endl;
	glm::vec2 vec(0.25, 0.5);
	std::cout << "Vec located at x=" << vec.x << " y=" << vec.y << std::endl;
}