#pragma once
#include "Model.h"
#include "Controller.h"
#include <iostream>
#include <conio.h>
#include "Consola.h"
#include "Map.h"

//MAP Size Define
#define MAP_HEIGHT 20
#define MAP_WIDTH 20
#define MAP_X1 5
#define MAP_Y1 5
#define MAP_X2 30
#define MAP_Y2 30

#define M_LEFTKEY 0xe04b
#define M_RIGHTKEY 0xe04d
#define M_UPKEY 0xe048
#define M_DOWNKEY 0xe050
#define M_ENTERKEY 0x004


using namespace std;

class View {

public:
	static void xyputstr(int x, int y, const char* str) {
			
		gotoxy(x*2, y);
		cout << str;
	}

	void background()
	{
		gotoxy(1, 1);
		textbackground(BLACK);			//배경색 지정
		textcolor(WHITE);				//글자색 지정
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
		cout << "˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚     ˚" << endl;
	}
	void select_Page() {
		background();
		GameStartPage();
		textbackground(BLACK);
		textcolor(YELLOW);
		sleep(1);
		xyputstr(16, 20, "1. Game Start");
		sleep(1);
		xyputstr(18, 23, "2. Help");
		_setcursortype(_NOCURSOR);
	}

	void select_Stage() {
		background();
		fillBox();
		textcolor(BLACK);
		xyputstr(7, 9, "STAGE 1");
		xyputstr(7, 11, "STAGE 2");
		xyputstr(7, 13, "STAGE 3");
		xyputstr(7, 15, "STAGE 4");
		xyputstr(7, 17, "STAGE 5");

	}
	void GameStartPage() {
		clrscr();
		background();								
		textcolor(GREEN);					
		textbackground(WHITE);				
		xyputstr(3, 9, " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓  ");
		xyputstr(3, 10, " ┃  #####                              ##                        ┃  ");
		xyputstr(3, 11, " ┃  ##   ###                           ##                        ┃  ");
		xyputstr(3, 12, " ┃  ##     ##                          ##                        ┃  ");
		xyputstr(3, 13, " ┃  ##   ###    ##    ##     ######    ## #####                  ┃  ");
		xyputstr(3, 14, " ┃  #####       ##    ##    ##         ###    ##                 ┃  ");
		xyputstr(3, 15, " ┃  ##          ##    ##     #####     ##     ##                 ┃  ");
		xyputstr(3, 16, " ┃  ##          ##    ##         ##    ##     ##                 ┃  ");
		xyputstr(3, 17, " ┃  ##           ######     ######     ##     ##      X  2       ┃  ");
		xyputstr(3, 18, " ┃                                                               ┃  ");
		xyputstr(3, 19, " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛  ");
		_setcursortype(_NOCURSOR);						
	}

	void help() {
		clrscr();
		background();						//배경 출력			
		textcolor(RED);					//빨간색 텍스트 칼라
		textbackground(WHITE);				//흰색 배경
		xyputstr(3, 9,  " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ ");
		xyputstr(3, 10, " ┃□□□□□□□□□□□□□□□<Help>□□□□□□□□□□□□□□┃ ");
		xyputstr(3, 11, " ┃□□□□□□□□□□↑↓←→ : 화살키로 움직입니다□□□□□□□┃ ");
		xyputstr(3, 12, " ┃□□□□□□□□□1. 공을 빈 하트에 넣어야 합니다.□□□□□□□┃ ");
		xyputstr(3, 13, " ┃□□□□□□□□2. 플레이어는 공을 밀 수 있습니다.□□□□□□□┃ ");
		xyputstr(3, 14, " ┃□□□□□3. 모든 공을 빈 하트에 넣는다면 클리어 입니다.□□□□┃ ");
		xyputstr(3, 15, " ┃□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□┃ ");
		xyputstr(3, 16, " ┃□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□┃ ");
		xyputstr(3, 17, " ┃□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□┃ ");
		xyputstr(3, 18, " ┃□□□□□□□□□ 시작하려면 아무 키나 누르시오□□□□□□□□┃ ");
		xyputstr(3, 19, " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ ");
		_setcursortype(_NOCURSOR);						//커서 없애기
		_getch();
		textbackground(BLACK);								
		textcolor(WHITE);								
	}

	void statusWindow() {
		textbackground(BLACK);
		textcolor(10);
		xyputstr(26, MAP_Y1, "▨▤▤▤▤▤▤▤▤▤▧");
		xyputstr(26, MAP_Y1 + 1, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 2, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 3, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 4, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 5, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 6, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 7, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 8, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 9, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 10, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 11, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 12, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 13, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 14, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 15, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 16, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 17, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 18, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 19, "▥                  ▥");
		xyputstr(26, MAP_Y1 + 20, "▧▤▤▤▤▤▤▤▤▤▨");
	}

	void fillBox() {
		textbackground(YELLOW);
		for (int i = MAP_X1; i <= MAP_X2; ++i)
			for (int j = MAP_Y1; j <= MAP_Y2; ++j)
				xyputstr(i, j, "  ");

	}

	
	
	//캐릭터 그린다
	void drawCharacter(int col, int row) {
		textbackground(YELLOW);
		textcolor(BLACK);
		xyputstr((MAP_X1 + col ), MAP_Y1 + row, "☆");
	}


	void print_Map(int mapData[][20]) {
		
		for (int row = 0; row < 20; ++row) {
			for (int col = 0; col < 20; ++col) {
				char oneblock = mapData[row][col];
				textbackground((oneblock == 1) ? DARKGRAY : YELLOW);
				textcolor(BLACK);
				gotoxy((MAP_X1 + col ) * 2, MAP_Y1 + row );
				switch (oneblock)
				{
				case 0: puts("  ");
				case 1: puts("▦");
				case 2: puts("  ");
				case 3: puts("○");
				case 4: puts("♡");
				case 5: puts("♥");
				}
			}
		}
	}

	void view_image(int select) {
		if (select == 0) {
			print_Map(mapData[0]);
		}
		if (select == 1) {
			print_Map(mapData[1]);
		}
		if (select == 2) {
			print_Map(mapData[2]);
		}
		if (select == 3) {
			print_Map(mapData[3]);
		}
		if (select == 4) {
			print_Map(mapData[4]);
		}
	}
	void showStageAndputs(int stage, int puts, int step) {
		int x = MAP_HEIGHT * 2;
		int y = 7;
		textbackground(BLACK);
		textcolor(14);
		gotoxy(x + 15, y);
		printf("Stage:%d", stage+1);
		gotoxy(x + 15, y + 3);
		printf("Goal:%d", puts);
		gotoxy(x + 15, y + 6);
		printf("Step:%d", step);
	}
	
	void Ending() {
		background();
		textcolor(GREEN);
		textbackground(WHITE);
		xyputstr(3, 9, " ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓  ");
		xyputstr(3, 10, " ┃   '매우매우' 아쉽게도 작품은 끝입니다.                        ┃  ");
		xyputstr(3, 11, " ┃    더는 없습니다.                                             ┃  ");
		xyputstr(3, 12, " ┃    하지만 이번 작품을 토대로 삼아                             ┃  ");
		xyputstr(3, 13, " ┃    더욱 많은 게임, 프로그램을 만들 것 입니다 .                ┃  ");
		xyputstr(3, 14, " ┃                                                               ┃  ");
		xyputstr(3, 15, " ┃    그럼 이만 다음에 만나길 기도하겠습니다.                    ┃  ");
		xyputstr(3, 16, " ┃                                                               ┃  ");
		xyputstr(3, 17, " ┃                                  PushPush Game. by 박서연     ┃  ");
		xyputstr(3, 18, " ┃                                                    이송하     ┃  ");
		xyputstr(3, 19, " ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛  ");
		_setcursortype(_NOCURSOR);
	}
	//캐릭터 움직이기
	void MoveCharacter(int posx, int posy, int oldx, int oldy, int stagenum) {
		textbackground(YELLOW);
		textcolor(RED);
			if ((posx - oldx) != 0) {							// 좌우로 이동하는데 앞에 공이 있을 경우
				int ball;
				if ((posx - oldx) == 1) { //오른쪽 이동
					ball = mapData[stagenum][posy][posx];

					if (ball == 3) { //내 앞에 공인경우
						if (mapData[stagenum][posy][posx + 1] == 1) {
							return;
						}
						if (mapData[stagenum][posy][posx + 1] == 3) {
							return;
						}
						if (mapData[stagenum][posy][posx + 1] == 4) {
							xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "♥");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy][posx + 1] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
							}
							else {
								xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //내 앞에 꽉찬 구멍
						xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "○");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						if (mapData[stagenum][oldy][oldx] == 0) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
						}
					}
					ball = NULL;
				}

				if ((posx - oldx) == -1) { //왼쪽 이동
					ball = mapData[stagenum][posy][posx];
					if (ball == 3) { //내 앞에 공인경우
						if (mapData[stagenum][posy][posx - 1] == 1) {
							return;
						}
						if (mapData[stagenum][posy][posx - 1] == 3) {
							return;
						}
						if (mapData[stagenum][posy][posx - 1] == 4) {
							xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "♥");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy][posx - 1] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
							}
							else {
								xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //내 앞에 꽉찬 구멍
						xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "○");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						if (mapData[stagenum][oldy][oldx] == 0) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
						}
					}
					ball = NULL;
				}
			}

			if ((posy - oldy) != 0) {// 상하로 이동하는데 앞에 공이 있을 경우
				int ball;
				if ((posy - oldy) == 1) { //아래쪽 이동
					ball = mapData[stagenum][posy][posx];
					if (ball == 3) { //내 앞에 공인경우
						if (mapData[stagenum][posy+1][posx] == 1) {
							return;
						}
						if (mapData[stagenum][posy + 1][posx] == 3) {
							return;
						}
						if (mapData[stagenum][posy + 1][posx] == 4) {
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy + 1, "♥");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy + 1][posx] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy+1, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
							}
							else {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy+1, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //내 앞에 꽉찬 구멍
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy + 1, "○");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						if (mapData[stagenum][oldy][oldx] == 0) {

							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
						}
					}
					ball = NULL;
				}

				if ((posy - oldy) == -1) { //위쪽 이동
					ball = mapData[stagenum][posy][posx];
					if (ball == 3) { //내 앞에 공인경우
						if (mapData[stagenum][posy - 1][posx] == 1) {
							return;
						}
						if (mapData[stagenum][posy - 1][posx] == 3) {
							return;
						}
						if (mapData[stagenum][posy - 1][posx] == 4) {
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy - 1, "♥");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy - 1][posx] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy-1, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
							}
							else {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy-1, "○");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //내 앞에 꽉찬 구멍
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy - 1, "○");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "☆");
						if (mapData[stagenum][oldy][oldx] == 0) {

							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "♡");
						}
					}
				}


			}
		

		

		
	}

	
};