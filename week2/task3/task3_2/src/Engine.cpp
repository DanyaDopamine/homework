#include "Engine.h"

Engine::Engine(const std::string &type) : type(type) {}

std::string Engine::getType() const {
    return type;
}
