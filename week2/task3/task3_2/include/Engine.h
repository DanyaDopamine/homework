#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
private:
    std::string type;

public:
    Engine(const std::string &type);
    std::string getType() const;
};

#endif // ENGINE_H
