#pragma once
// Change the direction of movement by pressing the button
void directionChange() {
	// Check whether there is a key operation
	if (_kbhit()) {  // If there is a key operation, return true
		switch (_getch()) {
			// 72,80,75,77, the key values of the left and right arrows
		case 'w':
		case 'W':
		case 72:
			if (snake.dirction != DOWN)
				snake.dirction = UP;
			break;
		case 's':
		case 'S':
		case 80:
			if (snake.dirction != UP)
				snake.dirction = DOWN;
			break;
		case 'a':
		case 'A':
		case 75:
			if (snake.dirction != RIGHT)
				snake.dirction = LEFT;
			break;
		case 'd':
		case 'D':
		case 77:
			if (snake.dirction != LEFT)
				snake.dirction = RIGHT;
			break;
		case ' ':
			while (1) {
				if (_getch() == ' ')
					return;
			}
			// system("pause");
		}
	}
}