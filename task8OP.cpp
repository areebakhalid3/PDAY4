#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMenu();
void calculateAggregate(string namestd,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string namestd1,float ecatMarks,string namestd2,float ecatMarks2);


int main(){

system("cls");
int choice = 0;
string name;
float matricMarks, interMarks, ecatMarks;

printMenu();
while(choice !=3)
{ 
cout << "Enter your choice(1,2,3): ";
cin >> choice;


if (choice == 1){
cout << "Enter name: ";
cin >> name;
cout << "Enter Matric Marks(out of 1100): ";
cin >> matricMarks;
cout << "Enter Inter Marks(out of 550): ";
cin >> interMarks;
cout << "Enter ECAT Marks(out of 400): ";
cin >> ecatMarks;
calculateAggregate(name, matricMarks, interMarks, ecatMarks);
}


if(choice==2){
string namestd1,namestd2;
float ecatMarks1, ecatMarks2;

cout << "Enter name of student 1: ";
cin >> namestd1;
cout << "Enter ecat marks(out of 400): ";
cin >> ecatMarks1;

cout << "Enter name of student 2: ";
cin >> namestd2;
cout << "Enter ecat marks(out of 400): ";
cin >> ecatMarks2;

compareMarks(namestd1, ecatMarks1, namestd2, ecatMarks2);

}



if(choice==3)
{ cout << "Exiting program." <<endl;
}



if(choice>3)
{ cout << "Invalid. Try again." <<endl; 
}


  }


}


void printMenu()
{
gotoxy(15,0);
cout << "            ##    ##   #######  #######            " <<endl;
gotoxy(15,1);
cout << "            ##    ##   ##          #               " <<endl;
gotoxy(15,2);
cout << "            ##    ##   #######     #               " <<endl;
gotoxy(15,3);
cout << "            ##    ##   ##          #               " <<endl;
gotoxy(15,4);
cout << "             ######    #######     #               " <<endl;
gotoxy(15,5);
cout << "                                                   " <<endl;
gotoxy(15,6);
cout << "      ##    ##   #####   ##     ##  ######         " <<endl;
gotoxy(15,7);
cout << "      ##    ##  ##   ##  ## # # ##  #              " <<endl;
gotoxy(15,8);
cout << "      ##    ##  #######  ##  #  ##  ######         " <<endl;
gotoxy(15,9);
cout << "      ##    ##  ##   ##  ##     ##       #         " <<endl;
gotoxy(15,10);
cout << "       ######   ##   ##  ##     ##  ######         " <<endl;
gotoxy(15,11);
cout << "                                                   " <<endl;
gotoxy(15,12);
cout << "                                                   " <<endl;
gotoxy(15,13);
cout << "        1. Calculate Aggregrate                    " <<endl;
gotoxy(15,14);
cout << "        2. Compare Marks                           " <<endl;
gotoxy(15,15);
cout << "        3. Exit                                    " <<endl;
}


void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)
{
float agg = 0;
agg=((matricMarks/1100)*100)*0.3+((interMarks/550)*100)*0.3+((ecatMarks/400)*100)*0.4;
cout << "Aggregate for " << name << " is: " << agg << "%"<<endl;
}

void compareMarks(string namestd1, float ecatMarks1,string namestd2, float ecatMarks2)
{

if(ecatMarks1> ecatMarks2){
cout << namestd1 << " is the first roll number." <<endl; }


if(ecatMarks2> ecatMarks1){
cout << namestd2 << " is the first roll number." <<endl; }

if(ecatMarks2==ecatMarks1){
cout << "Both have same ecat marks." << endl; }

}

void gotoxy(int x,int y)
{ 
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
