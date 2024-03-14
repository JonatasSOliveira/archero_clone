#pragma once
#ifndef SKILL_H
#define SKILL_H

#include <string>
#include <string_view>

class Skill {
private:
    std::string name;
    std::string description;

public:
    Skill(std::string_view name, std::string_view description);

    std::string getName();
    std::string getDescription();
};

#endif // SKILL_H

