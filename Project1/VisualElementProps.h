#pragma once
#include <iostream>

class VisualElementProps
{
private:
	int positionX;
	int positionY;
	int width;
	int height;
	std::string hexColor;

public:
	VisualElementProps(int positionX, int positionY, int width, int height, const std::string& hexColor);

	int getPositionX();

	int getPositionY();

	int getWidth();

	int getHeight();

	std::string getHex();
};