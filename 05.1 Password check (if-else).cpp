#include <iostream>
#include <cmath>
using namespace std;
int main()
{

string un="DominicBeler";
int pass= 12345;

cout<< "Input your username: ";
cin>>un;

cout<< "Input your password: ";
cin>>pass;

if (un=="DominicBeler" && pass==12345){
	cout<<"Your username and password is correct.Logged in succesfully. ";

}
else {

cout<<"Username or password is incorrect. Please log in again. ";
	}

return 0;

}


