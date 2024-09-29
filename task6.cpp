#include<iostream>
using namespace std;
void value(int,int);
main(){

int hours,minutes;

cout << "Enter the number of hours: ";
cin >> hours;
cout << "Enter the number of minutes: ";
cin >> minutes;
value(minutes,hours);
}
void value(int minutes,int hours)
{

int hoursinmin;
hoursinmin=60*hours;

if(hoursinmin>minutes){
cout << hours;
}
if(hoursinmin<minutes){
cout << minutes;
}


}