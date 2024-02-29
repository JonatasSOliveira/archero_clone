#include "VisualElementProps.h"

VisualElementProps::VisualElementProps(int positionX, int positionY, int width, int height, const std::string& hexColor) {
	this->positionX = positionX;
	this->positionY = positionY;
	this->width = width;
	this->height = height;
	this->hexColor = hexColor;
}

int VisualElementProps::getPositionX() {
	return this->positionX;
}

int VisualElementProps::getPositionY() {
	return this->positionY;
}

int VisualElementProps::getWidth() {
	return this->width;
}

int VisualElementProps::getHeight() {
	return this->height;
}

std::string VisualElementProps::getHex() {
	return this->hexColor;
}