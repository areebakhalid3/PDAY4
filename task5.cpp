#include<iostream>
using namespace std;
void pos(int,int);
int main(){

int urpos,friendpos;
cout << "Enter your position:";
cin >> urpos;
cout << "Enter your friend's position:";
cin >> friendpos;
pos(urpos,friendpos);
}
void pos(int urpos,int friendpos)

{
int distance = friendpos - urpos;

if(distance >= 1){
    if(distance <= 6){
cout << "true" <<endl;
   }
}

if(distance > 6){
cout << "false" <<endl;
}

if(distance < 1){
cout << "false" <<endl;
}


}