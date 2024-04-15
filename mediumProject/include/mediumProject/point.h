#pragma once

class Point {
private:
	float x = 0;
	float y = 0;

public:
	Point(float x, float y) : x{ x }, y{ y } {};

	void setX(float x);
	void setY(float y);
	float getX() const;
	float getY() const;
};