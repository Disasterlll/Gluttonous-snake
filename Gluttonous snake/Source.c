#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "Header.h"
#include "foodinit.h"
#include "gameInit.h"
#include "gameDraw.h"
#include "snakeMove.h"
#include "directionChange.h"
#include "eatFood.h"
// Here's what you need to add background music
// #include<mmsystem.h>
// #pragma comment(lib,"winmm.lib")



int main() {
	gameInit();
	while (1) {
		snakeMove();
		directionChange();
		eatFood();
		if (snake.score >= SCORE_MAXSIZE) {
			char temp[10] = "";
			sprintf_s(temp,10, "Congratulations!");
			outtextxy(WIDE / 2 - 5, HEIGHT / 2, temp);
			Sleep(3000);
			return 0;
		}
		gameDraw();
		Sleep(50);
	}
	return 0;
}
