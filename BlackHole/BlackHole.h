//
// Created by cezary on 8/26/25.
//

#ifndef BLACKHOLE_BLACKHOLE_H
#define BLACKHOLE_BLACKHOLE_H
#include <string>
#include <glm/vec3.hpp>

class BlackHole {
private:
    double mass;
    double schwarzschildRadius{};
    glm::vec3 positionInSpace;
    std::string name;

    void updateSchwarzschildRadius();

public:
    BlackHole(double mass, glm::vec3 positionInSpace, std::string name = "BlackHole");

    double getMass() const;
    double getSchwarzschildRadius() const;
    glm::vec3 getPositionInSpace() const;
    std::string getName() const;

    void setMass(double newMass);
    void setPositionInSpace(const glm::vec3& newPos);

    double gravitationalForce(double otherMass, double distance) const;
};


#endif //BLACKHOLE_BLACKHOLE_H