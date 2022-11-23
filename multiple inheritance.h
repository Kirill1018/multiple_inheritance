#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
class walls
{
protected:
	int wall_1 = 2, wall_2 = 2, wall_3 = 4, wall_4 = 4;
};
class doors
{
protected:
	string door_1 = "серая", door_2 = "красная";
};
class windows
{
protected:
	int window_1 = 1, window_2 = 2;
};
class floor
{
protected:
	int length = 4, width = 2;
};
class house : public walls, doors, windows, floor
{
public:
	int wall_arr[4] = { wall_1, wall_2, wall_3, wall_4 }, window_arr[2] = { window_1, window_2 }, floor_arr[2] = { length, width };
	string door_arr[2] = { door_1, door_2 };
	void wall();
	void door();
	void window();
	void floor();
};