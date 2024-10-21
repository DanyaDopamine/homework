#include <iostream>
#include "pyramid.hpp"

int main() {
    int height;
    std::cout << "Pyramid height: " << std::endl;
    std::cin >> height;
    Pyramid(height);
    
    return 0;
}
