#pragma once

/*
import move_semantics_01;
import move_semantics_02;
import move_semantics_03;
*/

#include "move_semantics_01.h"
#include "move_semantics_02.h"
#include "move_semantics_03.h"

void move_semantics_01_demo(){
	move_semantics_01::try_out_move_semantics();
}


void move_semantics_02_demo(){
	move_semantics_02::try_out_move_semantics();
}

void move_semantics_03_demo(){
	//move_semantics_03::canvas_move_semantics_demo_1();
	move_semantics_03::canvas_move_semantics_demo_2();
}