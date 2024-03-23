#include "Projectile.h"

namespace Game {
	Projectile::Projectile(
		RendererPort* rendererPort_,
		PhysicsEngine* physicsEngine_,
		float positionXInMeters,
		float positionYInMeters
	) : VisualElement(
		rendererPort_, RenderDataDTO{ 
			positionXInMeters, 
			positionYInMeters, 
			10, 
			20, 
			"#ff0000" 
		}
	), physicsEngine(physicsEngine_) {}

	void Projectile::updatePosition() {
		this->positionYInMeters -= this->physicsEngine->calcDisplacement(this->currentSpeedPoints);
	}
}