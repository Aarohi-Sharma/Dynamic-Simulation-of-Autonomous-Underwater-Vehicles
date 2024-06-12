# Dynamic Simulation of Autonomous Underwater Vehicles (AUVs)

## Overview
This project focuses on employing dynamic simulation to model and optimize the operation of Autonomous Underwater Vehicles (AUVs) for ocean exploration. The simulation accounts for both translational and rotational dynamics of AUVs, including collision detection with obstacles.

## Table of Contents
1. [Introduction](#introduction)
2. [Problem Statement](#problem-statement)
3. [Methodology](#methodology)
4. [Algorithm](#algorithm)
5. [Flowchart](#flowchart)
6. [Results & Discussion](#results--discussion)
7. [Installation](#installation)
8. [Usage](#usage)
9. [Sources](#sources)
10. [Contributors](#contributors)

## Introduction
Autonomous Underwater Vehicles (AUVs) are untethered, unmanned robotic platforms designed for underwater exploration. They offer a cost-effective solution for oceanographic research, such as long-range surveys, autonomous docking, and shallow-water mine countermeasures.

## Problem Statement
The project aims to employ dynamic simulation to model and optimize the operation of AUVs for ocean exploration. The goal is to enhance maneuvering precision and motion control capabilities under energy constraints.

## Methodology
### Tools and Techniques
- **Graph Theory**: Used for designing models and simulating scenarios involving platforms, trajectories, paths, sensors, and environments.
- **MATLAB**: Utilized for simulation and analysis.
- **Numerical Integration (Runge-Kutta Method)**: Solves differential equations governing AUV dynamics.
- **Hydrodynamic Modeling**: Includes buoyancy, hydrostatics, drag, resistance, and added mass effects.
- **Six Degrees of Freedom (6-DOF) Dynamics**: Covers dynamic equations and external forces/torques.

### Steps
1. Design and simulate autonomous system scenarios.
2. Model and analyze buoyancy, hydrostatics, drag, resistance, and added mass effects.
3. Solve dynamic equations using numerical integration methods.
4. Implement collision detection mechanisms.

## Algorithm
### DynamicSimulation_Of_AUVs()
**Input:**
- Current velocity
- Temperature
- Fluid density
- Position (x, y, z)
- Velocity
- Mass
- Simulation time total
- Simulation step
- Obstacle position (x, y, z)
- Collision flag

**Output:**
- AUV trajectory
- Collision detection

**Procedure:**
1. **Initialization**: Declare necessary variables.
2. **Simulation Loop**: Iterate through each time step.
   - **Translation Motion**:
     - Update velocity, temperature, and fluid density.
     - Calculate drag, buoyancy, and gravity forces.
     - Determine total force and acceleration.
     - Update velocity and position.
   - **Rotation Motion**:
     - Calculate moments of inertia.
     - Compute torques and angular accelerations.
   - **Collision Detection**:
     - Check if AUV's position matches the obstacle position.
     - Increment collision flag if a collision is detected.
3. **End Loop**: End the simulation after the specified period.

## Flowchart
The flowchart illustrates the steps of the dynamic simulation algorithm, including the translation motion, rotation motion, and collision detection processes.
![create a flowchart for Dynamic Simulation of Autonomous Underwater Vehicles (1)](https://github.com/Aarohi-Sharma/Dynamic-Simulation-of-Autonomous-Underwater-Vehicles/assets/136839094/904ccda0-b522-4980-b971-5180bfcef8a3)

# Results & Discussion
The simulation provides the trajectory of the AUV and detects potential collisions with obstacles. The value of the collision flag indicates whether a collision occurred, helping to optimize AUV operations for safer and more efficient underwater navigation.

## Installation
1. Ensure MATLAB is installed on your system.
2. Clone this repository.
3. Open MATLAB and navigate to the project directory.

## Usage
1. Load the provided MATLAB scripts.
2. Input the required parameters (velocity, temperature, fluid density, etc.).
3. Run the simulation to observe the AUV's trajectory and collision detection.

## Sources
- Liang, X., Zhang, J., Qin, Y., & Yang, H. (2013). Dynamic Modeling and Computer Simulation for Autonomous Underwater Vehicles with Fins. Journal of Computers, 8(4). https://doi.org/10.4304/jcp.8.4.1058-1064
- Al‐Bzoor, M., Al‐assem, E., Alawneh, L., & Jararweh, Y. (2021). Autonomous underwater vehicles support for enhanced performance in the Internet of Underwater Things. Transactions on Emerging Telecommunications Technologies, 32(3). https://doi.org/10.1002/ett.4225‌
- Zhuang, Y., Huang, H., Sharma, S., Xu, D., & Zhang, Q. (2019). Cooperative Path Planning Of Multiple Autonomous Underwater Vehicles Operating In Dynamic Ocean Environment. ISA Transactions, 94, 174–186. https://doi.org/10.1016/j.isatra.2019.04.012
- Elmokadem, T., Zribi, M., & Youcef-Toumi, K. (2018). Control for Dynamic Positioning and Way-point Tracking of Underactuated Autonomous Underwater Vehicles Using Sliding Mode Control. Journal of Intelligent & Robotic Systems, 95(3-4), 1113–1132. https://doi.org/10.1007/s10846-018-0830-8
- Gan, W., Su, L., & Chu, Z. (2023). A PSO-enhanced Gauss pseudospectral method to solve trajectory planning for autonomous underwater vehicles. Mathematical Biosciences and Engineering, 20(7), 11713–11731. https://doi.org/10.3934/mbe.2023521‌
- Sun, Z., Yu, J., Zhang, A., Huang, Y., & Wang, Z. (2019). Design and Characteristic Analysis of Variable Buoyancy System for Long Range Autonomous Underwater Vehicle. https://doi.org/10.1145/3351917.3351973
- Liu, Y., Che, J., Xu, H., & Cao, C. (2015). Adaptive Attitude Control of Autonomous Underwater Vehicles Using Back-stepping. https://doi.org/10.1145/2831296.2831343‌
- Gan, W., Su, L., & Chu, Z. (2023). Trajectory Planning of Autonomous Underwater Vehicles Based on Gauss Pseudospectral Method. Sensors, 23(4), 2350. https://doi.org/10.3390/s23042350
- Tian, Q., Wang, T., Liu, B., & Ran, G. (2022). Thruster Fault Diagnostics and Fault Tolerant Control for Autonomous Underwater Vehicle with Ocean Currents. Machines, 10(7), 582. https://doi.org/10.3390/machines10070582
- Alam, K., Ray, T., & Anavatti, S. G. (2014). Design and construction of an autonomous underwater vehicle. Neurocomputing, 142, 16–29. https://doi.org/10.1016/j.neucom.2013.12.055
- Design of a semi-autonomous underwater vehicle for intervention missions (SAUVIM). (1998). IEEE Conference Publication | IEEE Xplore. https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=670059
- Absolute positioning of an autonomous underwater vehicle using GPS and acoustic measurements. (2005, January 1). IEEE Journals & Magazine | IEEE Xplore. https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=1435583
- Autonomous underwater vehicles for Ocean Exploration. (2003). IEEE Conference Publication | IEEE Xplore. https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=1282454
- Zhang, X., Yang, F., Liu, H., Zhang, Y., & Sha, Q. (2023). Design and implementation of autonomous underwater vehicle simulation System based on MOOS and Unreal Engine. Electronics, 12(14), 3107. https://doi.org/10.3390/electronics12143107


## Contributors
- Aarohi Sharma

For more information, refer to the detailed documentation and code included in this repository.
