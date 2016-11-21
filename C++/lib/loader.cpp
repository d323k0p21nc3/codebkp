/**
 * DEREK PRINCE MUTENDE
 * P15/1724/2016
 * Created on 20th September 2016
 * Last Updated on 25th September 2016
**/

#include <winsock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include <iostream>

using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPostiton(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void load(string description)
{
    system("cls");

    gotoxy(34,14);

    cout << description << "... please wait";

    gotoxy(30,15);

    for(int r=1; r<=30; r++){
        for(int q=0; q<=19000000; q++);

        cout << (char)177;
    }

    system("cls");
}
