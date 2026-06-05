#pragma once

const double g{9.8}; // acceleration

double calculateDistance(double a, double t);
double calculateDistance(double vi, double a, double t);
double calculateVelocity(double a, double t);
double calculateVelocity(double vi, double a, double t);
double calculateMomentum(double m, double v);
double calculateKineticEnergy(double m, double v);