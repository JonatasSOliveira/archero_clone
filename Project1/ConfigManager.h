#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class ConfigManager {
private:
public:
    static constexpr char CONFIG_FILE_PATH[] = "config.ini";

    ConfigManager() {
    }

    int getWindowWidth() const {
        return 800;
    }
    
    int getWindowHeight() const {
        return 600;
    }

    int getSceneWith() const {
        return 700;
    }

    int getSceneHeight() const {
        return 500;
    }

    int getScenePositionX() const {
        return (this->getWindowWidth() - this->getSceneWith()) / 2;
    }

    int getScenePositionY() const {
        return (this->getWindowHeight() - this->getSceneHeight()) / 2;
    }
};