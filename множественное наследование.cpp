#include "multiple inheritance.cpp"
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело - синий
A Ч светло - зеленый
B Ч светло - голубой
— Ч светло - красный
E Ч светло - желтый
F Ч €рко - белый
system("color F0");*/  // ”становка белого фона и черного текста
void main()
{
	setlocale(LC_ALL, "ru");
	house _house;
	_house.wall();
	_house.door();
	_house.window();
	_house.floor();
}
void house::wall()
{
	int perimeter = 0, x = 0;//периметр и перва€ стена
	while (x < 4)
	{
		perimeter += wall_arr[x];
		x++;
	}
	SetColor(1, 0);
	cout << "периметр=" << perimeter << endl;
}
void house::door()
{
	SetColor(8, 0);
	cout << "перва€ дверь " << door_arr[0] << endl;
	SetColor(4, 0);
	cout << "втора€ дверь " << door_arr[1] << endl;
}
void house::window()
{
	SetColor(5, 0);
	cout << "площадь первого окна=" << window_arr[0] << endl;
	SetColor(6, 0);
	cout << "площадь второго окна=" << window_arr[1] << endl;
}
void house::floor()
{
	int square = floor_arr[0] * floor_arr[1];
	SetColor(7, 0);
	cout << "площадь=" << square;
}