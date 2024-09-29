#include<iostream>
using namespace std;
void pet(int);
main(){

int holidays;
cout << "Enter the number of holidays: ";
cin >> holidays;
pet(holidays);
}
void pet(int holidays)
{

int workingdays,timeforgames,diff,result,result1;
workingdays=365-holidays;

timeforgames=(workingdays*63)+(holidays*127);

diff=30000-(timeforgames);
result=diff/60;
result1=diff%60;

if(diff>1){
cout << "Tom sleeps well: " <<result <<" hours and " <<result1<<" minutes less for play";}
if(diff<=1){
cout << "Tom will run away: " <<(-result) <<" hours and " <<(-result1)<<" minutes for play";}
}