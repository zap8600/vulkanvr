#include "./stirling/stirling.hpp"
#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
    StirlingApplication app;
    
    try {
        app.run();
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
