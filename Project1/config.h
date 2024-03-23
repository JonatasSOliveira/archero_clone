#pragma once
namespace Game {
	namespace Config {
		inline constexpr int windowWidth = 800;
		inline constexpr int windowHeight = 600;
		inline constexpr int sceneWidth = 800;
		inline constexpr int sceneHeight = 600;
		inline constexpr int scenePositionX = (windowWidth - sceneWidth) / 2;
		inline constexpr int scenePositionY = (windowHeight - sceneHeight) / 2;
	}
}