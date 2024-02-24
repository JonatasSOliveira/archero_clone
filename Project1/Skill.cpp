#include "Skill.h"

Skill::Skill(std::string name, std::string description) {
    this->name = name;
    this->description = description;
}

std::string Skill::getName() {
    return name;
}

std::string Skill::getDescription() {
    return description;
}
