#pragma once
#include <Windows.h>
#include "Model.h"
#include "View.h"
#include "Sound.h"
#include "Status.h";


#define M_LEFTKEY 0xe04b
#define M_RIGHTKEY 0xe04d
#define M_UPKEY 0xe048
#define M_DOWNKEY 0xe050
#define M_ENTERKEY 0x00D
#define M_ESCKEY 0x01B

#define MAP_HEIGHT 20
#define MAP_WIDTH 15
#define MAP_X1 5
#define MAP_Y1 5
#define MAP_X2 35
#define MAP_Y2 23


class Controller {
//private:
	Model model;
	View view;
	Sound sound;
	Status status;

public:
	void Run()
	{	
		sound.playingBgm();
		view.background();
		view.select_Page();
		selectOption();
		view.background();
		view.select_Stage();
		selectStagepage();
		view.background();
		view.statusWindow();
		Gaming();
		view.Ending();
		
		_getch();
	}

	//시작페이지

	
	void selectOption() {
		view.xyputstr(15, 20, "▶");
		int i = 1, key;

		textcolor(WHITE);
		do {
			key = Get_Key();
			switch (key)
			{
			case M_UPKEY: {
				if (i == 2)
					i--;
				view.xyputstr(15, 20, "▶");
				view.xyputstr(17, 23, "  ");
				break;
			}
			case M_DOWNKEY: {
				if (i == 1)
					i++;
				view.xyputstr(17, 23, "▶");
				view.xyputstr(15, 20, "  ");
				break;
			}
			}
			sound.optionSelect();
		} while (key != M_ENTERKEY);
		if (i == 2)
			view.help();
	}
	void selectStagepage() {
		view.xyputstr(5, 9, "▶");
		int i = 1, key;

		textcolor(BLACK);
		do {
			sound.optionSelect();
			key = Get_Key();
			switch (key)
			{
			case M_UPKEY: {
				if (i == 1) {
					if(i!=1)i--;
					view.xyputstr(5, 9, "▶");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 2) {
					i--;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "▶");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 3) {
					i--;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "▶");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 4) {
					i--;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "▶");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 5) {
					i--;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "▶");
					break;
				}
				break;
				
			}
			case M_DOWNKEY: {
				if (i == 1) {
					i++;
					view.xyputstr(5, 9, "▶");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 2) {
					i++;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "▶");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 3) {
					i++;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "▶");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 4) {
					i++;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "▶");
					view.xyputstr(5, 17, "  ");
					break;
				}
				if (i == 5) {
					if(i!=5)i++;
					view.xyputstr(5, 9, "  ");
					view.xyputstr(5, 11, "  ");
					view.xyputstr(5, 13, "  ");
					view.xyputstr(5, 15, "  ");
					view.xyputstr(5, 17, "▶");
					break;
				}
				break;
				
			}
			}
			} while (key != M_ENTERKEY);
			if (i == 1) {
				model.setSelect(0);
			}
			if (i == 2) {
				model.setSelect(1);
			}
			if (i == 3) {
				model.setSelect(2);
			}
			if (i == 4) {
				model.setSelect(3);
			}
			if (i == 5) {
				model.setSelect(4);
			}
		}
	
	
	
	//방향키를 받는 함수
	int Get_Key() {
		int ch;
		ch = _getch();
		return (ch == 0xe0) ? (0xe000 | _getch()) : ch;
	}
	int GetNumber() {
		int ch;
		cin >> ch;
		return ch;
	}

	
	void Select_Stage() {
		int key;
		key = GetNumber();
		if (key==1)model.setSelect(1);

		 
		
	}
	void how_goal(int stagenum){
		model.set_Goal(0);
		for (int i = 0; i < 20; ++i) {
			for (int j = 0; j < 20; ++j) {
				if (mapData[stagenum][i][j] == 5) {
					model.plus_Goal();
				}
			}
		}
	}
	
	
	void Gaming() {
		int key = 0;
		while (1)
		{
			model.Set_oldx(3);
			model.Set_oldy(3);
			int step = 0;
			model.set_Step(step);
			int stagenum = model.getSelect();
			model.set_Stage(stagenum);
			view.view_image(stagenum);
			view.drawCharacter(3, 3);
			if (stagenum == 6)break;
			

			while(1) {
				status.randomPyojung();
				view.showStageAndputs(model.get_Stage(), model.get_Goal(), model.get_Step());
				model.setkey(Get_Key());
				key = model.getkey();
				


				if (key == M_DOWNKEY) {
					if (mapData[stagenum][model.Getoldy() + 1][model.Getoldx()] != 1) {
						model.SetX(model.Getoldx());
						model.SetY(model.Getoldy() + 1);
						view.MoveCharacter(model.Getnewx(), model.Getnewy(), model.Getoldx(), model.Getoldy(), stagenum);
						if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 3) { // 움직인 위치가 공이 있던 자리였을 경우
							if (mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] == 1) { // 공 다음 장소가 블록인 경우
								model.SetX(model.Getoldx());
								model.SetY(model.Getoldy());
							}
							if (mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] == 3) { // 공 다음 장소에 공이 또 있을 경우
								model.SetX(model.Getoldx());
								model.SetY(model.Getoldy());
							}
							if (mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] == 4) { // 공 다음 장소가 구멍일 경우 -> 꽉찬 구멍으로 변환
								mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 장소 -> 빈공간
								mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] = 5; // 빈 구멍 -> 꽉찬 구멍
							}
							if (mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] == 0) { // 공 다음 장소에 아무것도 없을 경우
								model.Set_oldx(model.Getnewx());
								model.Set_oldy(model.Getnewy());
								mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] = 3; // 다음칸에 공 옮기고
								mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 칸은 빈공간
							}
						}

						if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 5) { // 움직인 위치가 꽉찬 구멍일 경우 -> 이동 방향 앞에 공 만들어줘야 함
							if (mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] == 1) { // 꽉찬 구멍 다음 장소가 블록인 경우
								model.SetX(model.Getoldx());
								model.SetY(model.Getoldy());
							}
							if (mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] == 3) { // 꽉찬 구멍 다음 장소에 공이 있을 경우 -> 이동불가
								model.SetX(model.Getoldx());
								model.SetY(model.Getoldy());
							}
							if (mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] == 0) { // 꽉찬 구멍 다음 장소에 빈 공간일 경우
								model.Set_oldx(model.Getnewx());
								model.Set_oldy(model.Getnewy());
								mapData[stagenum][model.Getnewy() + 1][model.Getnewx()] = 3; // 다음 장소에 공을 놓음
								mapData[stagenum][model.Getnewy()][model.Getnewx()] = 4; // 현재 장소(꽉찬 구멍이 있던 장소)는 빈 구멍으로 변환
							}
						}
						model.Set_oldx(model.Getnewx());
						model.Set_oldy(model.Getnewy());

					}

				}
					if (key == M_UPKEY) {
						if (mapData[stagenum][model.Getoldy() - 1][model.Getoldx()] != 1) {
							model.SetX(model.Getoldx());
							model.SetY(model.Getoldy() - 1);
							view.MoveCharacter(model.Getnewx(), model.Getnewy(), model.Getoldx(), model.Getoldy(), stagenum);
							if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 3) { // 움직인 위치가 공이 있던 자리였을 경우
								if (mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] == 1) { // 공 다음 장소가 블록인 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] == 3) { // 공 다음 장소에 공이 또 있을 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] == 4) { // 공 다음 장소가 구멍일 경우 -> 꽉찬 구멍으로 변환
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 장소 -> 빈공간
									mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] = 5; // 빈 구멍 -> 꽉찬 구멍
								}
								if (mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] == 0) { // 공 다음 장소에 아무것도 없을 경우
									model.Set_oldx(model.Getnewx());
									model.Set_oldy(model.Getnewy());
									mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] = 3; // 다음칸에 공 옮기고
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 칸은 빈공간
								}
							}

							if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 5) { // 움직인 위치가 꽉찬 구멍일 경우 -> 이동 방향 앞에 공 만들어줘야 함
								if (mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] == 1) { // 꽉찬 구멍 다음 장소가 블록인 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] == 3) { // 꽉찬 구멍 다음 장소에 공이 있을 경우 -> 이동불가
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] == 0) { // 꽉찬 구멍 다음 장소에 빈 공간일 경우
									model.Set_oldx(model.Getnewx());
									model.Set_oldy(model.Getnewy());
									mapData[stagenum][model.Getnewy() - 1][model.Getnewx()] = 3; // 다음 장소에 공을 놓음
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 4; // 현재 장소(꽉찬 구멍이 있던 장소)는 빈 구멍으로 변환
								}
							}
							model.Set_oldx(model.Getnewx());
							model.Set_oldy(model.Getnewy());

						}
					}
					if (key == M_RIGHTKEY) {
						if (mapData[stagenum][model.Getoldy()][model.Getoldx() + 1] != 1) {
							model.SetX(model.Getoldx() + 1);
							model.SetY(model.Getoldy());
							view.MoveCharacter(model.Getnewx(), model.Getnewy(), model.Getoldx(), model.Getoldy(), stagenum);
							if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 3) { // 움직인 위치가 공이 있던 자리였을 경우
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] == 1) { // 공 다음 장소가 블록인 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] == 3) { // 공 다음 장소에 공이 또 있을 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] == 4) { // 공 다음 장소가 구멍일 경우 -> 꽉찬 구멍으로 변환
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 장소 -> 빈공간
									mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] = 5; // 빈 구멍 -> 꽉찬 구멍
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] == 0) { // 공 다음 장소에 아무것도 없을 경우
									model.Set_oldx(model.Getnewx());
									model.Set_oldy(model.Getnewy());
									mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] = 3; // 다음칸에 공 옮기고
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 칸은 빈공간
								}
							}

							if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 5) { // 움직인 위치가 꽉찬 구멍일 경우 -> 이동 방향 앞에 공 만들어줘야 함
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] == 1) { // 꽉찬 구멍 다음 장소가 블록인 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] == 3) { // 꽉찬 구멍 다음 장소에 공이 있을 경우 -> 이동불가
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] == 0) { // 꽉찬 구멍 다음 장소에 빈 공간일 경우
									model.Set_oldx(model.Getnewx());
									model.Set_oldy(model.Getnewy());
									mapData[stagenum][model.Getnewy()][model.Getnewx() + 1] = 3; // 다음 장소에 공을 놓음
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 4; // 현재 장소(꽉찬 구멍이 있던 장소)는 빈 구멍으로 변환
								}
							}
							model.Set_oldx(model.Getnewx());
							model.Set_oldy(model.Getnewy());

						}
					}
					if (key == M_LEFTKEY) {
						if (mapData[stagenum][model.Getoldy()][model.Getoldx() - 1] != 1) {
							model.SetX(model.Getoldx() - 1);
							model.SetY(model.Getoldy());
							view.MoveCharacter(model.Getnewx(), model.Getnewy(), model.Getoldx(), model.Getoldy(), stagenum);
							if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 3) { // 움직인 위치가 공이 있던 자리였을 경우
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] == 1) { // 공 다음 장소가 블록인 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] == 3) { // 공 다음 장소에 공이 또 있을 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] == 4) { // 공 다음 장소가 구멍일 경우 -> 꽉찬 구멍으로 변환
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 장소 -> 빈공간
									mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] = 5; // 빈 구멍 -> 꽉찬 구멍
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] == 0) { // 공 다음 장소에 아무것도 없을 경우
									model.Set_oldx(model.Getnewx());
									model.Set_oldy(model.Getnewy());
									mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] = 3; // 다음칸에 공 옮기고
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 0; // 공이 있던 칸은 빈공간
								}
							}

							if (mapData[stagenum][model.Getnewy()][model.Getnewx()] == 5) { // 움직인 위치가 꽉찬 구멍일 경우 -> 이동 방향 앞에 공 만들어줘야 함
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] == 1) { // 꽉찬 구멍 다음 장소가 블록인 경우
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] == 3) { // 꽉찬 구멍 다음 장소에 공이 있을 경우 -> 이동불가
									model.SetX(model.Getoldx());
									model.SetY(model.Getoldy());
								}
								if (mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] == 0) { // 꽉찬 구멍 다음 장소에 빈 공간일 경우
									model.Set_oldx(model.Getnewx());
									model.Set_oldy(model.Getnewy());
									mapData[stagenum][model.Getnewy()][model.Getnewx() - 1] = 3; // 다음 장소에 공을 놓음
									mapData[stagenum][model.Getnewy()][model.Getnewx()] = 4; // 현재 장소(꽉찬 구멍이 있던 장소)는 빈 구멍으로 변환
								}
							}
							model.Set_oldx(model.Getnewx());
							model.Set_oldy(model.Getnewy());

						}
					}
					if (key == M_ESCKEY) {
						model.setSelect(stagenum - 1);
						break;
					}
					step++;
					
					how_goal(stagenum);
					model.set_Step(step);

					if (model.get_Goal() == 3) break;


				}				
				model.setSelect(stagenum+1);
				if (model.getSelect() == 5)
					break;
		}

	}
	
};