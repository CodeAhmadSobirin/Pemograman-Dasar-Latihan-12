#include <windows.h>

void as (int a, int b) {
    COORD coord;
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}