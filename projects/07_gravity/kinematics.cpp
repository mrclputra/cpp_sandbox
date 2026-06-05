#include "kinematics.h"

double calculateDistance(double a, double t) {
    // given acceleration and time, find distance (m)
    return 0.5 * a * (t * t);
}

double calculateDistance(double vi, double a, double t) {
    // given initial velocity, acceleration, and time, find distance (m)
    return vi * a * 0.5 * a * (t * t);
}

// find vf (m/s)
double calculateVelocity(double a, double t) {
    return a * t;
}

// find vf given vi (m/s)
double calculateVelocity(double vi, double a, double t) {
    return vi + a * t;
}

// find p
//  momentum (kg*m/s)
double calculateMomentum(double m, double v) {
    return m * v;
}

// find K
//  kinetic energy (J)
double calculateKineticEnergy(double m, double v) {
    return 0.5 * m * v;
}