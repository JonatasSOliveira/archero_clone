#pragma once
#include <iostream>


class RenderDataDTO {
private:
	float positionXInMeters;
	float positionYInMeters;
	float widthInMeters;
	float heightInMeters;
	std::string hexColor;
public:
	RenderDataDTO(
		float positionXInMeters,
		float positionYInMeters,
		float widthInMeters,
		float heightInMeters,
		std::string hexColor
	);

	float getPositionXInMeters() {
		return this->positionXInMeters;
	}

	void setPositionXInMeters(float positionXInMeters) {
		this->positionXInMeters = positionXInMeters;
	}
	 
	float getPositionYInMeters() {
		return this->positionYInMeters;
	}

	void setPositionYInMeters(float positionYInMeters) {
		this->positionYInMeters = positionYInMeters;
	}

	float getWidthInMeters() {
		return this->widthInMeters;
	}

	void setWidthInMeters(float widthInMeters) {
		this->widthInMeters = widthInMeters;
	}

	float getHeightInMeters() {
		return this->heightInMeters;
	}

	void setHeightInMeters(float heightInMeters) {
		this->heightInMeters = heightInMeters;
	}

	std::string getHexColor() {
		return this->hexColor;
	}
};