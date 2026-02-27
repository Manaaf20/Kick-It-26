#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int strength;
    int accuracy;
    int speed;
    int score;
    int attempts;

public:
    Player(std::string playerName, int str = 75, int acc = 75, int spd = 75);
    
    // Getters
    std::string getName() const;
    int getStrength() const;
    int getAccuracy() const;
    int getSpeed() const;
    int getScore() const;
    int getAttempts() const;
    
    // Setters
    void setScore(int newScore);
    void addScore(int points);
    void incrementAttempts();
    void resetStats();
};

#endif // PLAYER_H