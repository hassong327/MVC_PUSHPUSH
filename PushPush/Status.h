#pragma once
#include <iostream>
#include <conio.h>
#include "Consola.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

#define MAP_HEIGHT 13
#define MAP_WIDTH 20
#define MAP_X1 5
#define MAP_Y1 5
#define MAP_X2 30
#define MAP_Y2 30

class Status {
public:
	static void xyputstr(int x, int y, const char* str) {

		gotoxy(x * 2, y);
		cout << str;
	}
	void randomPyojung() {
			int count = rand();
			int random_int = count % 5;
			int x = MAP_HEIGHT * 2;
			int y = 7;
			textcolor(WHITE);
			xyputstr(x + 2, y + 11, "            ");
			xyputstr(x + 2, y + 12, "            ");
			xyputstr(x + 2, y + 13, "            ");
			switch (random_int)
			{
			case 0:
				st_happy();
				break;
			case 1:
				st_angry();
				break;
			case 2:
				st_sad();
				break;
			case 3:
				st_badword();
				break;
			case 4:
				st_idontknow();
				break;
			}

		
	}
	void st_happy() {
		int x = MAP_HEIGHT * 2;
		int y = 7;
		textbackground(BLACK);
		textcolor(GREEN);
		xyputstr(x + 2, y + 11, "        ");
		xyputstr(x + 2, y + 12, "좀 하는데?");
		xyputstr(x + 2, y + 13, "♡ o ♡ ♬");
	}
	void st_angry() {
		int x = MAP_HEIGHT * 2;
		int y = 7;
		textbackground(BLACK);
		textcolor(YELLOW);
		xyputstr(x + 2, y + 11, "그렇게 할거면");
		xyputstr(x + 2, y + 12, " 내가 하겠다");
		xyputstr(x + 2, y + 13, "ㅡ ㅅ ㅡ");
	}
	void st_sad() {
		int x = MAP_HEIGHT * 2;
		int y = 7;
		textbackground(BLACK);
		textcolor(BLUE);
		xyputstr(x + 2, y + 11, " 망했네 ");
		xyputstr(x + 2, y + 12, " 망했어 ");
		xyputstr(x + 2, y + 13, "ㅠ ▽ ㅠ");
	}
	void st_badword() {
		int x = MAP_HEIGHT * 2;
		int y = 7;
		textbackground(BLACK);
		textcolor(RED);
		xyputstr(x + 2, y + 11, "X XX  XX");
		xyputstr(x + 2, y + 12, " XX X XX");
		xyputstr(x + 2, y + 13, "⊙ ◇ ⊙");
	}
	void st_idontknow() {
		int x = MAP_HEIGHT * 2;
		int y = 7;
		textbackground(BLACK);
		textcolor(5);
		xyputstr(x + 2, y + 11, " 너무   ");
		xyputstr(x + 2, y + 12, " 어려워 ");
		xyputstr(x + 2, y + 13, "＠ ㅅ ＠");
	}


};