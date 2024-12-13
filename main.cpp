#include "stirling.hpp"
#include <iostream>
#include <stdexcept>

int main() {
    Application app;
    
    try {
        app.run();
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
