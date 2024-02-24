#pragma once
#ifndef SKILL_H
#define SKILL_H

#include <string>

class Skill {
private:
    std::string name;
    std::string description;

public:
    Skill(std::string name, std::string description);

    std::string getName();
    std::string getDescription();
};

#endif // SKILL_H

