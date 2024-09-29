#include<iostream>
using namespace std;
void flowershop(int,int,int);
main(){

int redrose,whiterose,tulip;

cout << "Enter number of red roses: ";
cin >> redrose;
cout << "Enter number of white roses: ";
cin >> whiterose;
cout << "Enter numbet of tulips: ";
cin >> tulip;
flowershop(redrose,whiterose,tulip);

}

void flowershop(int redrose,int whiterose,int tulip)

{

float price,disc;
price= (redrose*2.00)+(whiterose*4.10)+(tulip*2.50);
cout << "Original price: $" << price <<endl;

if(price>200){
disc=price-(0.2*price);
cout << "Discounted price: $" <<disc <<endl;
}


}

