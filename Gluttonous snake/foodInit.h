#pragma once
// Initialize food
void foodInit() {
	// Set the random number seed
	// srand(GetTickCount());   // GetTickCount() gets the number of milliseconds since the system started
	srand((unsigned)time(NULL));
	food.r = snake.r;
	food.x = rand() % (WIDE - 2 * food.r) + food.r;
	food.y = rand() % (HEIGHT - 2 * food.r) + food.r;
	// printf("%d %d\n", food.x, food.y);
	food.flag = true;
}
