#ifndef GAME_H
#define GAME_H

#include <stdbool.h>
#include <stdio.h>

// Game state enum
typedef enum {
    MENU,
    PLAYING,
    GAME_OVER
} GameState;

// Game structure to hold the game state and other related data
typedef struct {
    GameState state;
    int score;
    int level;
} Game;

// Function prototypes
void initializeGame(Game *game);
void updateGame(Game *game);
void renderGame(const Game *game);
void handleInput(Game *game);

#endif // GAME_H