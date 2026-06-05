// equations for free fall kinematics
#include "freefall.h"

// v = g * t
double calculateVelocity(double g, double t)
{
    return g * t;
}

// d = 0.5 * g * t^2
double calculateDistanceFallen(double g, double t)
{
    return 0.5 * g * (t * t);
}