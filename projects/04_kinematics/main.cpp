#include <iostream>

#include "freefall.h"
#include "energy.h"
#include "constants.h"

int main()
{
    double mass{140}; // kg
    double time{1}; // seconds

    double velocity = calculateVelocity(g, time);
    double distance = calculateDistanceFallen(g, time);
    double momentum = calculateMomentum(mass, velocity);
    double kineticEnergy = calculateKineticEnergy(mass, velocity);

    std::cout << "for a " << mass << "kg mass over " << time << "s:" <<  std::endl;
    std::cout << "final velocity is " << velocity << "m/s" << std::endl;
    std::cout << "distance travelled is " << distance << "m" << std::endl;
    std::cout << "momentum is " << momentum << "kg*m/s" << std::endl;
    std::cout << "kinetic energy is " << kineticEnergy << "J" << std::endl;

    return 0;
}
