#pragma once
#define SNAKE_MAXSIZE 500 // The maximum number of snakes
#define HEIGHT 480 // Height of the window
#define WIDE 640 // The width of the window
#define SCORE_MAXSIZE 100

typedef struct {
	int x, y;

}POINT;

// Snake structure
struct Snake {
	int size;   // Number of sections
	int dirction;   // Direction
	int speed;   // Speed
	int score;   // Score
	int r;
	POINT coordinate[SNAKE_MAXSIZE];   // coordinates
}snake;

// The structure of food
struct Food {
	int x;   // Horizontal coordinate
	int y;   // The ordinate
	int r;   // Radius
	bool flag;   // Sign
}food;

// Direction of movement
enum Dirction {
	UP,
	LEFT,
	RIGHT,
	DOWN
};

