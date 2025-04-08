# AudioWaveSimCPP

## Overview

**AudioWaveSimCPP** is an advanced acoustic wave simulation tool originally developed to support research in sound-based localization techniques. This C++ application models the complex dynamics of sound wave propagation in air, providing researchers with a robust platform for investigating acoustic phenomena.

## Purpose

This simulator was created to:

- Model acoustic wave propagation in various environments
- Visualize complex sound field interactions with obstacles
- Provide a testbed for algorithms that determine sound source location
- Support research in acoustic-based localization and mapping

## Key Features

- **Real-time Wave Physics Simulation**: Accurately models sound propagation, reflection, diffraction, and interference
- **Configurable Environment Builder**: Easily adjust simulation parameters and environmental conditions
- **Multi-source Support**: Simulate multiple sound emitters with customizable frequency and amplitude
- **Obstacle Integration**: Model wave interactions with barriers of varying acoustic properties
- **High-performance Computation**: Optimized C++ code for efficient simulation of complex wave dynamics
- **Visual Analytics**: Dynamic visualization of wave propagation for intuitive understanding

## Technical Highlights

- **Modern C++ Implementation**: Leverages C++17/20 features for clean, efficient code
- **Object-Oriented Architecture**: Modular design for extensibility and maintenance
- **Wave Equation Solver**: Implements numerical methods for solving the acoustic wave equation
- **Multi-threading**: Parallel processing to accelerate simulation calculations
- **Cross-platform Compatibility**: Developed with portability in mind


### Build Instructions

To build **AudioWaveSimCPP**, follow these steps:

1. **Clone the Repository**  
    Ensure you clone the repository with submodules to include all dependencies:
    ```bash
    git clone https://github.com/drewsipher/AudioWaveSimCPP.git
    cd AudioWaveSimCPP
    git submodule update --init --recursive
    ```

2. **Install Dependencies**  
    Make sure you have the following installed:
    - A C++ compiler supporting C++17 or later (e.g., GCC, Clang, or MSVC)
    - CMake (version 3.15 or higher)
    - Make or Ninja (build system)

3. **Build the Project**  
    Run the following commands to configure and build the project:
    ```bash
    mkdir build
    cd build
    cmake ..
    cmake --build .
    ```

4. **Run the Application**  
    After a successful build, the executable will be located in the `build` directory. Run it as follows:
    ```bash
    ./AudioWaveSimCPP
    ```

## Usage Instructions

To use **AudioWaveSimCPP**, follow these steps:

1. **Create Sound Sources**  
    Use the mouse to click within the simulation area to create sound sources.

2. **Adjust Parameters**  
    Before creating sound sources, adjust their properties such as amplitude, frequency, and pulse length (number of pulses) using the parameter panels.

3. **Start the Simulation**  
    Press the **Start** button to begin the simulation.

4. **Pause the Simulation**  
    Press the **Stop** button to pause the simulation.

5. **Reset the Simulation**  
    Press the **Reset** button to clear the simulation and start over.


## Future Development

- Machine learning components for automated pattern recognition
- Doppler effect simulation for moving sources and receivers
- Better creation tools for more complex scenes.

## Project Status

This project is not actively maintained. Feel free to fork or suggest changes.
