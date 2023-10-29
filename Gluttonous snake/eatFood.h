#pragma once
// Eat food
void eatFood() {
	if (food.flag &&
		snake.coordinate[0].x >= food.x - food.r &&
		snake.coordinate[0].x <= food.x + food.r &&
		snake.coordinate[0].y >= food.y - food.r &&
		snake.coordinate[0].y <= food.y + food.r) {
		snake.size++;
		snake.score += 10;
		food.flag = false;
	}
	if (!food.flag) {
		foodInit();
	}
}