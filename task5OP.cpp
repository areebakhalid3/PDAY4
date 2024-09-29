#include<iostream>                                                             
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printname();

main(){

system("cls");
printname();

}

void printname()

{

gotoxy(30,4);
cout << "     ##        ########    ########  ########  ########      ##            " <<endl;
gotoxy(30,5);
cout << "   ##  ##      ##     ##   ##        ##        ##    ##    ##  ##          " <<endl;
gotoxy(30,6);
cout << "  ##    ##     ##     ##   ##        ##        ##    ##   ##    ##         " <<endl;
gotoxy(30,7);
cout << " ##########    #########   ########  ########  ########  ##########        " <<endl;
gotoxy(30,8);
cout << " ##      ##    ##     ##   ##        ##        ##    ##  ##      ##        " <<endl;
gotoxy(30,9);
cout << " ##      ##    ##     ##   ##        ##        ##    ##  ##      ##        " <<endl;
gotoxy(30,10);
cout << " ##      ##    ##     ##   ########  ########  ########  ##      ##        " <<endl;

}

void gotoxy(int x,int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}








                                                                               