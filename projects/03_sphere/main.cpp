#include <iostream>
#include "sphereUtils.h"

int main()
{
    std::cout << "Enter sphere radius: ";
    double radius;
    std::cin >> radius;

    std::cout << "diameter: " << calculateSphereDiameter(radius) << std::endl;
    std::cout << "surface area: " << calculateSphereSurfaceArea(radius) << std::endl;
    std::cout << "volume: " << calculateSphereVolume(radius) << std::endl;

    return 0;
}
