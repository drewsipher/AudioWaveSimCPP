#include <iostream>
#include "src/Visualizer.h"

int main() {
    // Initialize wave simulation
    std::cout << "Initializing wave simulation..." << std::endl;

    // Initialize visualizer
    std::cout << "Initializing visualizer..." << std::endl;
    Visualizer visualizer = Visualizer(1024,512);
    visualizer.show();

    visualizer.close();
    std::cout << "Simulation ended." << std::endl;

    return 0;
}