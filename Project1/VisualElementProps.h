#pragma once
#include <iostream>

class VisualElementProps
{
private:
	float positionXInMeters;
	float positionYInMeters;
	float widthInMeters;
	float heightInMeters;
	std::string hexColor;

public:
	VisualElementProps(int positionX, int positionY, int width, int height, const std::string& hexColor);

	int getPositionX();

	int getPositionY();

	int getWidth();

	int getHeight();

	std::string getHex();
};