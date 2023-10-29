#pragma once
// Graphic drawing
void gameDraw() {
	// Dual buffering prevents stalling
	BeginBatchDraw();

	// Set the background color
	setbkcolor(RGB(0, 108, 190));
	cleardevice();

	// Draw a snake
	for (int i = 0; i < snake.size; i++) {
		solidcircle(snake.coordinate[i].x, snake.coordinate[i].y, snake.r);
	}
	// Draw food
	if (food.flag)
		solidcircle(food.x, food.y, food.r);

	// Draw the score
	char tmp[20] = "";
	sprintf_s(tmp, "target score: %d", SCORE_MAXSIZE);
	outtextxy(0, 0, tmp);
	sprintf_s(tmp, "score: %d", snake.score);
	outtextxy(0, 20, tmp);
	EndBatchDraw();
}