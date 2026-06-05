// equations for momentum and energy
#include "energy.h"

// p = m * v
double calculateMomentum(double m, double v)
{
    return m * v;
}

// KE = 0.5 * m * v^2
double calculateKineticEnergy(double m, double v)
{
    return 0.5 * m * (v * v);
}