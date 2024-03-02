#include "RenderDataDTO.h"

RenderDataDTO::RenderDataDTO(
	float positionXInMeters,
	float positionYInMeters,
	float widthInMeters,
	float heightInMeters,
	std::string hexColor
) {
	this->positionXInMeters = positionXInMeters;
	this->positionYInMeters = positionYInMeters;
	this->widthInMeters = widthInMeters;
	this->heightInMeters = heightInMeters;
	this->hexColor = hexColor;
}