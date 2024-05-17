#include <iostream>
#include <cmath>
using namespace std;
int main ()
{

string un = "admin"; 
string pass = "password";

cout<<"WELCOME TO THE PROGRAM"<<endl;

for (int count=2; count>=0; count--){
	
cout<<"\nUsername: ";
cin>>un;
cout<<"Password: ";
cin>>pass;	

if (un == "admin" && pass=="password"){
	cout<<"Access granted. Welcome, "<<un<<"." <<endl;
	break;
}

else if (un != "admin" || pass !="password") {
	cout<<"Username or password is incorrect." <<endl;
	cout<<"Access Denied. Please try again."<<endl;
	cout<<"You have "<<count<<" attempts left.\n";
}
}

else (un != "admin" || pass !="password"){
	cout<<"\nYou have reached the maximun number of attempts"<<endl;
}	


return 0;
}


