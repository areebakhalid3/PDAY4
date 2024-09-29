#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void moveplayer(int x,int y);

main()
{

int x = 10, y = 1,direction = 1;
system("cls");
printMaze();

while(true)
{
moveplayer(x, y);
y = y + direction;
if(y == 7)
{
direction = -direction;}
if(y == 1)
{
direction = -direction;}


}

}

void moveplayer(int x, int y)

{
gotoxy(x, y);
cout << "P";
Sleep(100);
gotoxy(x, y);
cout << " " ;
}

void printMaze()

{

   cout << "  ######################" << endl;
   cout << "  #                    #" << endl;
   cout << "  #                    #" << endl;
   cout << "  #                    #" << endl;
   cout << "  #                    #" << endl;
   cout << "  #                    #" << endl;
   cout << "  #                    #" << endl;
   cout << "  #                    #" << endl;
   cout << "  ######################" << endl;

}

void gotoxy(int x,int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}




