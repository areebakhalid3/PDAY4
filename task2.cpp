#include<iostream>
using namespace std;
void torf(string);
main(){

string input;
cout << "Enter 'true' or 'false': ";
cin >> input;
torf(input);
}
void torf(string input)
{
if(input=="true"){
cout << "false";
}
if(input=="false"){
cout << "true";
}

}
