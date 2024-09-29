#include<iostream>
using namespace std;
void checkspeed(int);

main(){

int speed;
cout << "Enter your speed:";
cin >> speed;
checkspeed(speed);
}
void checkspeed(int speed)
{

if(speed>100){
cout << "HALT... YOU WILL BE CHALLENGED!!!";
} 

if(speed<=100){
cout << "Perfect! You are doing good. ";
} 


}