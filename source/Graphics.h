#pragma once

#include <nds.h>
#define ROTOSCALE

enum BUFFER_TYPE
{
    MAIN,
    SUB,
};

//members
u16* Graphics_mainBuffer;
u16* Graphics_subBuffer;
int Graphics_mainW;
int Graphics_mainH;
int Graphics_subW;
int Graphics_subH;

/*
	This function does not receive any input parameter. It initializes the main
	graphical engine to be used.
	It also enables the corresponding VRAM bank to be used.
*/
void Graphics_ini();


/*
 	 Function that assigns the buffer (already implemented) and its size
 */
void Graphics_assignBuffer(enum BUFFER_TYPE bT, u16* buffer, int w, int h);


//Addiche sur MAIN et SUB les background de base
void Ini_upper_ingame_screen();
void Ini_below_ingame_screen();
void Push_Right_upper_ingame_BG2();