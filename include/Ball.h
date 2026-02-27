#ifndef BALL_H
#define BALL_H

class Ball {
private:
    float x, y; // Position of the ball
    float velocityX, velocityY; // Velocity of the ball
    float mass; // Mass of the ball

public:
    Ball(float startX, float startY, float startMass);
    void kick(float forceX, float forceY);
    void updatePosition(float deltaTime);
    void applyGravity(float gravity);
    void applyAirResistance(float resistance);
};

#endif // BALL_H