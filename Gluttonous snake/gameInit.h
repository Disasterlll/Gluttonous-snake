#pragma once
// Initialize
void gameInit() {
	// Play background music
	// If a string error occurs here, go to Item-Property-Advanced Character set and change it to multi-byte character set
	// mciSendString("open ./res/snake/snake_bgm.mp3 alias BGM", 0, 0, 0);
	// mciSendString("play BGM repeat", 0, 0, 0);

	// Initializes the graphics window
	initgraph(WIDE, HEIGHT/*, SHOWCONSOLE*/);

	// Initialize the snake
	snake.size = 12;
	snake.r = 5;
	snake.speed = snake.r * 2;
	snake.score = 0;
	for (int i = 0; i < snake.size; i++) {
		snake.coordinate[i].x = (snake.size - i) * 2 * snake.r;
		snake.coordinate[i].y = HEIGHT / 2;
		// printf("% d % d\n", snake.coordinate[i].x, snake.coordinate[i].y);
	}
	snake.dirction = RIGHT;

	// Initialize food
	foodInit();

	// Set the color of snake and food
	setfillcolor(RGB(255, 210, 81));
}

