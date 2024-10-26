#pragma once
#include <string>

class Animal {
private:
    std::string name;
public:
    Animal(const std::string& n);
    const std::string& GetName() const;
    virtual std::string Voice() const;
};
