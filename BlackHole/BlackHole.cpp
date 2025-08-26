//
// Created by cezary on 8/26/25.
//

#include "BlackHole.h"

const double G = 6.67430e-11;
const double SOLAR_MASS = 1.988e30;
const double LIGHT_SPEED = 299792.458;

BlackHole::BlackHole(double m, glm::vec3 pos, std::string n)
    : mass(m), positionInSpace(pos), name(std::move(n))
{
    updateSchwarzschildRadius();
}

void BlackHole::updateSchwarzschildRadius()
{
    double massKg = mass * SOLAR_MASS;
    schwarzschildRadius = (2.0 * G * massKg) / (LIGHT_SPEED * 1000.0 * LIGHT_SPEED * 1000.0);
}

double BlackHole::getMass() const
{
    return mass;
}
double BlackHole::getSchwarzschildRadius() const
{
    return schwarzschildRadius;
}
glm::vec3 BlackHole::getPositionInSpace() const
{
    return positionInSpace;
}
std::string BlackHole::getName() const
{
    return name;
}

void BlackHole::setMass(double newMass)
{
    mass = newMass;
    updateSchwarzschildRadius();
}

void BlackHole::setPositionInSpace(const glm::vec3& newPos)
{
    positionInSpace = newPos;
}

double BlackHole::gravitationalForce(double otherMass, double distance) const
{
    double M = mass * SOLAR_MASS;
    double m = otherMass * SOLAR_MASS;
    double r = distance * 1000.0;

    return G * (M * m) / (r * r);
}