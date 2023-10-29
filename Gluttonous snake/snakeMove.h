#pragma once

// Move the snake
void snakeMove() {
	// Move your body with your head
	for (int i = snake.size - 1; i > 0; i--) {
		snake.coordinate[i] = snake.coordinate[i - 1];
	}
	// Head movement
	switch (snake.dirction) {
	case UP:
		snake.coordinate[0].y -= snake.speed;
		if (snake.coordinate[0].y + snake.r <= 0)
			snake.coordinate[0].y = HEIGHT;
		break;
	case DOWN:
		snake.coordinate[0].y += snake.speed;
		if (snake.coordinate[0].y + snake.r >= HEIGHT)
			snake.coordinate[0].y = 0;
		break;
	case LEFT:
		snake.coordinate[0].x -= snake.speed;
		if (snake.coordinate[0].x + snake.r <= 0)
			snake.coordinate[0].x = WIDE;
		break;
	case RIGHT:
		snake.coordinate[0].x += snake.speed;
		if (snake.coordinate[0].x + snake.r >= WIDE)
			snake.coordinate[0].x = 0;
		break;
	}
}