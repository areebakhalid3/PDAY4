#include<iostream>
using namespace std;
void tpchecker(int,int);
main(){

int ppl,rolls;

cout << "Enter number of people in the household: ";
cin >> ppl;
cout << "Enter number of rolls: ";
cin >> rolls;
tpchecker(ppl,rolls);
}

void tpchecker(int ppl,int rolls)
{

int totalsheets,sheetsreqperday,days;

totalsheets= rolls*500;
sheetsreqperday=57*ppl;
days=(totalsheets/sheetsreqperday);

cout << "Your TP will last " << days << " days";

if(days>14){
cout << " ,no need to panic!"<<endl;
}
if(days<14){
cout << " ,buy more!" <<endl;
}





}