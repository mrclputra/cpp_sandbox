#include <iomanip>
#include <iostream>
#include "kinematics.h"

// Q3 Write a short program to simulate a ball being dropped off a tower.
//  the user should be asked for the mass of the ball and the time in seconds.
//  like in the kinematics project, calculate final velocity, the distance traveled, momentum, and kinetic energy

double input(const char* prompt) {
    std::cout << prompt;
    double x;
    std::cin >> x;
    return x;
}

int main()
{
    // get ball mass
    double mass = input("Enter ball mass (kg): ");
    // get time
    double time = input("Enter time sample window (s): ");

    double finalVelocity = calculateVelocity(g, time);
    double displacement = calculateDistance(g, time);
    double momentum = calculateMomentum(mass, finalVelocity);
    double kineticEnergy = calculateKineticEnergy(mass, finalVelocity);

    std::cout << std::left;
    std::cout << std::setw(18) << "final velocity: " << finalVelocity << " m/s\n";
    std::cout << std::setw(18) << "displacement: " << displacement << " m\n";
    std::cout << std::setw(18) << "momentum: " << momentum << " kg*m/s\n";
    std::cout << std::setw(18) << "kinetic energy: " << kineticEnergy << " J\n";

    return 0;
}
