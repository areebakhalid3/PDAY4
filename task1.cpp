#include<iostream>
using namespace std;
void number(int,int);
main(){

int num1,num2;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
number(num1,num2);
}

void number(int num1,int num2)
{
if(num1 == num2){
cout << "true";
}
if(num1 != num2){
cout << "false";
}


}