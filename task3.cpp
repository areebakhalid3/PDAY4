#include<iostream>
using namespace std;
void airline(string,float);
main(){

string name;
float num;

while(true){
cout << "Enter the country's name:";
cin >> name;
cout << "Enter the ticket price in dollars:$ ";
cin >> num;
airline(name,num);
}
}
void airline(string name,float num)
{

float final;

if(name=="Pakistan"){
final=num-(0.05*num);
cout << "Final ticket price after discount:$ " << final;
}

 if(name=="Ireland"){
final=num-(0.1*num);
cout << "Final ticket price after discount:$ " << final;
}

if(name=="India"){
final=num-(0.2*num);
cout << "Final ticket price after discount:$ " << final;
}

if(name=="England"){
final=num-0.3*num;
cout << "Final ticket price after discount:$ " << final;
}

if(name=="Canada"){
final=num-0.45*num;
cout << "Final ticket price after discount:$ " << final;
}


}