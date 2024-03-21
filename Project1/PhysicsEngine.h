#pragma once
#include "TimeServicePort.h"

namespace Game {
	class PhysicsEngine {
	private:
		TimeServicePort* timeServicePort;
	public:
		PhysicsEngine(TimeServicePort* timeServicePort_) : timeServicePort(timeServicePort_) {}

		double calcDisplacement(double speedPoints) {
			double elapsedTime = this->timeServicePort->getLastCurrentTimeInMilliseconds() - this->timeServicePort->getLastElapsedTimeInMilliseconds();
			return elapsedTime * speedPoints;
		}
	};
}