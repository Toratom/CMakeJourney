#pragma once
#include <glm/vec2.hpp>

class Point {
private:
	glm::vec2 p;

public:
	Point(float x, float y);

	void setX(float x);
	void setY(float y);
	float getX() const;
	float getY() const;
};