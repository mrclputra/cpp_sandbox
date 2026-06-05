#include "sphereUtils.h"

const double PI{3.14159265358979323846};

double calculateSphereVolume(double radius)
{
    return (4.0/3.0) * PI * (radius * radius * radius);
}

double calculateSphereSurfaceArea(double radius)
{
    return 4 * PI * radius * radius;
}

double calculateSphereDiameter(double radius)
{
    return radius * 2;
}