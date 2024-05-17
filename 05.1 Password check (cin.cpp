#include <iostream>
#include <cmath>
using namespace std;
int main ()
{

string un = "admin"; 
string pass = "password";
int=count;
	
cout<<"Username: ";
cin>>un;
cout<<"Password: ";
cin>>pass;	

do {
	cout<<"Username or password is incorrect." <<endl;
	cout<<"Access Denied. Please try again."<<endl;
	count++;
}
while (un != "admin" || pass !="password");


if (un == "admin" && pass =="password"){
	cout<<"Access granted. Welcome, "<<un<<"." <<endl;
}


return 0;
}


