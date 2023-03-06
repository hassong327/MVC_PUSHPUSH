#pragma once
#include <iostream>
#include <conio.h>
#include "Consola.h"
#include "View.h"


//Key Define
#define M_LEFTKEY 0xe04b
#define M_RIGHTKEY 0xe04d
#define M_UPKEY 0xe048
#define M_DOWNKEY 0xe050

class Model {
private:

	
public:
	int stageData;
	int stage, step, select_key;
	int key;
	int xpos, ypos;
	int oldx, oldy;
	int newx, newy;
	int goal;
	Model()
	{
		goal = 0;
		key = 0;
		step = 0;
		select_key = 0;
		
		
	}
	

	//키를 setkey로 model 멤버인 key에 저장하고
	void setkey(int ch) {
		key = ch;
	}
	//저장된 key를 사용할 수 있게 부르는 역할
	int getkey() {
		return key;
	}


	void set_Stage(int ch) {
		this->stage = ch;
	}
	int get_Stage() {
		return this->stage;
	}

	void set_Goal(int a) {
		goal = a;
	}
	void plus_Goal() {
		goal++;
	}
	int get_Goal() {
		return goal;
	}
	void set_Step(int a) {
		step = a;
	}
	int get_Step() {
		return step;
	}
//////////////////////////////////////////////////////////////////////////
	//
	void Set_oldx(int x) {
		oldx = x;
	}
	void Set_oldy(int y) {
		oldy = y;
	}
	int Getoldx(){
		return oldx;
	}
	int Getoldy() {
		return oldy;
	}
	//
	void SetX(int x) {
		newx = x;
	}
	void SetY(int y) {
		newy = y;
	}
	
	
	int getxpos() {
		return xpos;
	}
	int getypos() {
		return ypos;
	}

	//
	int Getnewx() {
		return newx;
	}
	int Getnewy() {
		return newy;
	}
/////////////////////////////////////////////////////////////////////////
	

/////////////////////////////////////////////////////////////////////////
	//맵 선택 변수
	void setSelect(int x) {
		select_key = x;
		stage = x;
	}
	int getSelect() {
		return select_key;
	}


};