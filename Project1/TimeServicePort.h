#pragma once

namespace Game {
	class TimeServicePort {
	public:
		virtual float getCurrentTimeInMilliseconds() = 0;
		virtual void updateLastElapsedTimeInMilliseconds() = 0;
		virtual float getLastElapsedTimeInMilliseconds() = 0;
		virtual void updateLastCurrentTimeInMilliseconds() = 0;
		virtual float getLastCurrentTimeInMilliseconds() = 0;
		virtual ~TimeServicePort() {}
	};
}