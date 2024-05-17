#include <iostream>
#include <cmath>
using namespace std;
int main()
{

float cm, conv;

cout<< "Input length in centimeters: ";
cin>>cm;

if (cm<=0){
	cout<<"Input is invalid. ";
}

else if (conv=cm/2.54) {

cout<<"The input is equals to " <<conv<<" inches. ";
	}



return 0;
}

