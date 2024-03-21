#include "TimeServicePort.h"
#include <SDL.h>
#include <iostream>

namespace Game {
    class SDLTimeServiceAdapter : public TimeServicePort {
    private:
        float lastElapsedTimeInMilliseconds = 0.0;
        float lastCurrentTimeInMilliseconds = 0.0;
    public:
        SDLTimeServiceAdapter() {
            // Inicialize a SDL se necessário
            if (SDL_Init(SDL_INIT_TIMER) != 0) {
                std::cerr << "Erro ao inicializar a SDL: " << SDL_GetError() << std::endl;
                // Lidar com o erro, lançar uma exceção, etc.
            }
        }

        virtual float getCurrentTimeInMilliseconds() override {
            return static_cast<float>(SDL_GetTicks());
        }

        virtual float getLastElapsedTimeInMilliseconds() override{
            return this->lastElapsedTimeInMilliseconds;
        }

        virtual void updateLastElapsedTimeInMilliseconds() override {
            this->lastElapsedTimeInMilliseconds = this->lastCurrentTimeInMilliseconds;
        }

        virtual float getLastCurrentTimeInMilliseconds() override {
            return this->lastCurrentTimeInMilliseconds;
        }

        virtual void updateLastCurrentTimeInMilliseconds() override {
            this->lastCurrentTimeInMilliseconds = this->getCurrentTimeInMilliseconds();
        }
    };
}