#include "Skill.h"

Skill::Skill(std::string_view name, std::string_view description) {
    this->name = name;
    this->description = description;
}

std::string Skill::getName() {
    return name;
}

std::string Skill::getDescription() {
    return description;
}
