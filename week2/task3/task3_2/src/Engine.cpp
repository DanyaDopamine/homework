#include "Engine.h"

Engine::Engine(int power) : power(power) {}

int Engine::getPower() const {
    return power;
}
