#include "VisualElementProps.h"

VisualElementProps::VisualElementProps(int positionX, int positionY, int width, int height, const std::string& hexColor) {
	this->positionXInMeters = positionX;
	this->positionYInMeters = positionY;
	this->widthInMeters = width;
	this->heightInMeters = height;
	this->hexColor = hexColor;
}

int VisualElementProps::getPositionX() {
	return this->positionXInMeters;
}

int VisualElementProps::getPositionY() {
	return this->positionYInMeters;
}

int VisualElementProps::getWidth() {
	return this->widthInMeters;
}

int VisualElementProps::getHeight() {
	return this->heightInMeters;
}

std::string VisualElementProps::getHex() {
	return this->hexColor;
}