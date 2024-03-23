#pragma once
#include "VisualElement.h"
#include "RendererPort.h"
#include "RenderDataDTO.h"
#include "PhysicsEngine.h"

namespace Game {
	class Projectile: public VisualElement {
	private:
		float currentSpeedPoints = 1.0;
		PhysicsEngine* physicsEngine = nullptr;

	public:
		Projectile(
			RendererPort* rendererPort_,
			PhysicsEngine* physicsEngine_, 
			float positionXInMeters, 
			float positionYInMeters
		);

		void updatePosition();

		void onCollision() override {}
	};
}