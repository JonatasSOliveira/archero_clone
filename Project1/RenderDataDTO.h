#pragma once
#include <iostream>
#include <string_view>

namespace Game {
	struct RenderDataDTO {
		float positionXInMeters;
		float positionYInMeters;
		float widthInMeters;
		float heightInMeters;
		std::string_view hexColor;
	};
}