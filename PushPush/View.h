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
		textbackground(BLACK);			//���� ����
		textcolor(WHITE);				//���ڻ� ����
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
		cout << "��     ��     ��     ��     ��     ��     ��     ��     ��     ��     ��" << endl;
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
		xyputstr(3, 9, " ����������������������������������������������������������������������������������������������������������������������������������  ");
		xyputstr(3, 10, " ��  #####                              ##                        ��  ");
		xyputstr(3, 11, " ��  ##   ###                           ##                        ��  ");
		xyputstr(3, 12, " ��  ##     ##                          ##                        ��  ");
		xyputstr(3, 13, " ��  ##   ###    ##    ##     ######    ## #####                  ��  ");
		xyputstr(3, 14, " ��  #####       ##    ##    ##         ###    ##                 ��  ");
		xyputstr(3, 15, " ��  ##          ##    ##     #####     ##     ##                 ��  ");
		xyputstr(3, 16, " ��  ##          ##    ##         ##    ##     ##                 ��  ");
		xyputstr(3, 17, " ��  ##           ######     ######     ##     ##      X  2       ��  ");
		xyputstr(3, 18, " ��                                                               ��  ");
		xyputstr(3, 19, " ����������������������������������������������������������������������������������������������������������������������������������  ");
		_setcursortype(_NOCURSOR);						
	}

	void help() {
		clrscr();
		background();						//��� ���			
		textcolor(RED);					//������ �ؽ�Ʈ Į��
		textbackground(WHITE);				//��� ���
		xyputstr(3, 9,  " ������������������������������������������������������������������������������������������������������������������������������������ ");
		xyputstr(3, 10, " ������������������<Help>��������������ভ ");
		xyputstr(3, 11, " ����������������� : ȭ��Ű�� �����Դϴ١������ভ ");
		xyputstr(3, 12, " ������������1. ���� �� ��Ʈ�� �־�� �մϴ�.�������ভ ");
		xyputstr(3, 13, " �����������2. �÷��̾�� ���� �� �� �ֽ��ϴ�.�������ভ ");
		xyputstr(3, 14, " ��������3. ��� ���� �� ��Ʈ�� �ִ´ٸ� Ŭ���� �Դϴ�.����ভ ");
		xyputstr(3, 15, " ����������������������������������ভ ");
		xyputstr(3, 16, " ����������������������������������ভ ");
		xyputstr(3, 17, " ����������������������������������ভ ");
		xyputstr(3, 18, " ������������ �����Ϸ��� �ƹ� Ű�� �����ÿ���������ভ ");
		xyputstr(3, 19, " ������������������������������������������������������������������������������������������������������������������������������������ ");
		_setcursortype(_NOCURSOR);						//Ŀ�� ���ֱ�
		_getch();
		textbackground(BLACK);								
		textcolor(WHITE);								
	}

	void statusWindow() {
		textbackground(BLACK);
		textcolor(10);
		xyputstr(26, MAP_Y1, "�ɢǢǢǢǢǢǢǢǢǢ�");
		xyputstr(26, MAP_Y1 + 1, "��                  ��");
		xyputstr(26, MAP_Y1 + 2, "��                  ��");
		xyputstr(26, MAP_Y1 + 3, "��                  ��");
		xyputstr(26, MAP_Y1 + 4, "��                  ��");
		xyputstr(26, MAP_Y1 + 5, "��                  ��");
		xyputstr(26, MAP_Y1 + 6, "��                  ��");
		xyputstr(26, MAP_Y1 + 7, "��                  ��");
		xyputstr(26, MAP_Y1 + 8, "��                  ��");
		xyputstr(26, MAP_Y1 + 9, "��                  ��");
		xyputstr(26, MAP_Y1 + 10, "��                  ��");
		xyputstr(26, MAP_Y1 + 11, "��                  ��");
		xyputstr(26, MAP_Y1 + 12, "��                  ��");
		xyputstr(26, MAP_Y1 + 13, "��                  ��");
		xyputstr(26, MAP_Y1 + 14, "��                  ��");
		xyputstr(26, MAP_Y1 + 15, "��                  ��");
		xyputstr(26, MAP_Y1 + 16, "��                  ��");
		xyputstr(26, MAP_Y1 + 17, "��                  ��");
		xyputstr(26, MAP_Y1 + 18, "��                  ��");
		xyputstr(26, MAP_Y1 + 19, "��                  ��");
		xyputstr(26, MAP_Y1 + 20, "�ʢǢǢǢǢǢǢǢǢǢ�");
	}

	void fillBox() {
		textbackground(YELLOW);
		for (int i = MAP_X1; i <= MAP_X2; ++i)
			for (int j = MAP_Y1; j <= MAP_Y2; ++j)
				xyputstr(i, j, "  ");

	}

	
	
	//ĳ���� �׸���
	void drawCharacter(int col, int row) {
		textbackground(YELLOW);
		textcolor(BLACK);
		xyputstr((MAP_X1 + col ), MAP_Y1 + row, "��");
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
				case 1: puts("��");
				case 2: puts("  ");
				case 3: puts("��");
				case 4: puts("��");
				case 5: puts("��");
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
		xyputstr(3, 9, " ����������������������������������������������������������������������������������������������������������������������������������  ");
		xyputstr(3, 10, " ��   '�ſ�ſ�' �ƽ��Ե� ��ǰ�� ���Դϴ�.                        ��  ");
		xyputstr(3, 11, " ��    ���� �����ϴ�.                                             ��  ");
		xyputstr(3, 12, " ��    ������ �̹� ��ǰ�� ���� ���                             ��  ");
		xyputstr(3, 13, " ��    ���� ���� ����, ���α׷��� ���� �� �Դϴ� .                ��  ");
		xyputstr(3, 14, " ��                                                               ��  ");
		xyputstr(3, 15, " ��    �׷� �̸� ������ ������ �⵵�ϰڽ��ϴ�.                    ��  ");
		xyputstr(3, 16, " ��                                                               ��  ");
		xyputstr(3, 17, " ��                                  PushPush Game. by �ڼ���     ��  ");
		xyputstr(3, 18, " ��                                                    �̼���     ��  ");
		xyputstr(3, 19, " ����������������������������������������������������������������������������������������������������������������������������������  ");
		_setcursortype(_NOCURSOR);
	}
	//ĳ���� �����̱�
	void MoveCharacter(int posx, int posy, int oldx, int oldy, int stagenum) {
		textbackground(YELLOW);
		textcolor(RED);
			if ((posx - oldx) != 0) {							// �¿�� �̵��ϴµ� �տ� ���� ���� ���
				int ball;
				if ((posx - oldx) == 1) { //������ �̵�
					ball = mapData[stagenum][posy][posx];

					if (ball == 3) { //�� �տ� ���ΰ��
						if (mapData[stagenum][posy][posx + 1] == 1) {
							return;
						}
						if (mapData[stagenum][posy][posx + 1] == 3) {
							return;
						}
						if (mapData[stagenum][posy][posx + 1] == 4) {
							xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "��");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy][posx + 1] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
							}
							else {
								xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //�� �տ� ���� ����
						xyputstr(MAP_X1 + posx + 1, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						if (mapData[stagenum][oldy][oldx] == 0) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
						}
					}
					ball = NULL;
				}

				if ((posx - oldx) == -1) { //���� �̵�
					ball = mapData[stagenum][posy][posx];
					if (ball == 3) { //�� �տ� ���ΰ��
						if (mapData[stagenum][posy][posx - 1] == 1) {
							return;
						}
						if (mapData[stagenum][posy][posx - 1] == 3) {
							return;
						}
						if (mapData[stagenum][posy][posx - 1] == 4) {
							xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "��");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy][posx - 1] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
							}
							else {
								xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //�� �տ� ���� ����
						xyputstr(MAP_X1 + posx - 1, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						if (mapData[stagenum][oldy][oldx] == 0) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
						}
					}
					ball = NULL;
				}
			}

			if ((posy - oldy) != 0) {// ���Ϸ� �̵��ϴµ� �տ� ���� ���� ���
				int ball;
				if ((posy - oldy) == 1) { //�Ʒ��� �̵�
					ball = mapData[stagenum][posy][posx];
					if (ball == 3) { //�� �տ� ���ΰ��
						if (mapData[stagenum][posy+1][posx] == 1) {
							return;
						}
						if (mapData[stagenum][posy + 1][posx] == 3) {
							return;
						}
						if (mapData[stagenum][posy + 1][posx] == 4) {
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy + 1, "��");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy + 1][posx] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy+1, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
							}
							else {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy+1, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //�� �տ� ���� ����
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy + 1, "��");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						if (mapData[stagenum][oldy][oldx] == 0) {

							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
						}
					}
					ball = NULL;
				}

				if ((posy - oldy) == -1) { //���� �̵�
					ball = mapData[stagenum][posy][posx];
					if (ball == 3) { //�� �տ� ���ΰ��
						if (mapData[stagenum][posy - 1][posx] == 1) {
							return;
						}
						if (mapData[stagenum][posy - 1][posx] == 3) {
							return;
						}
						if (mapData[stagenum][posy - 1][posx] == 4) {
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy - 1, "��");
							xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if (mapData[stagenum][posy - 1][posx] == 0) {
							if (mapData[stagenum][oldy][oldx] == 4) {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy-1, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
							}
							else {
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy-1, "��");
								xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
								xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
							}

						}
					}
					if (ball == 4) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 5) { //�� �տ� ���� ����
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy - 1, "��");
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
					}
					if (ball == 0) {
						xyputstr(MAP_X1 + posx, MAP_Y1 + posy, "��");
						if (mapData[stagenum][oldy][oldx] == 0) {

							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "  ");
						}
						if ((mapData[stagenum][oldy][oldx] == 4) || (mapData[stagenum][oldy][oldx] == 5)) {
							xyputstr(MAP_X1 + oldx, MAP_Y1 + oldy, "��");
						}
					}
				}


			}
		

		

		
	}

	
};