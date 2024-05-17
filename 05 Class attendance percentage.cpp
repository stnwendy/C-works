#include <iostream>
#include <cmath>
using namespace std;
int main()
{

float pres, tot, perc;

cout<< "Total number of classes: ";
cin>>tot;

cout<< "Days present in the class: ";
cin>>pres;

perc =(pres/tot)*100;

if (perc>75){
	cout<<"You have attended "<<perc<<"% of the classes. You are allowed to sit in. ";
}

else {
	cout<<"You are not allowed to sit in.";
}



return 0;

}

