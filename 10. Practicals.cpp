#include <iostream>
#include <cmath>
using namespace std;
int main ()
{

string un = "admin8"; 
string pass = "admin12345";

cout<<"WELCOME TO THE PROGRAM"<<endl;

cout<<"\nUsername: ";
cin>>un;
cout<<"Password: ";
cin>>pass;


if (un == "admin8" && pass=="admin12345"){
	cout<<"Access granted. Welcome, "<<un<<"." <<endl;
	
	while (true){
	
	double choice_cnvrt;	
	cout<<"\n[1]Press 1 for Celsius to Fahrenheit.";
	cout<<"\n[2]Press 2 for Fahrenheit to Celsius.";
	cout<<"\nPlease choose one function: ";
	cin>>choice_cnvrt;
	
		double final_fahr, final_cels, cels, fahr;
		if (choice_cnvrt==1){
			cout<<"\nEnter your temperature in Celsius: ";
			cin>>cels;
			
			final_fahr= (cels*9/5)+32.0;
			
			cout<<"\nYour converted temperature is "<<final_fahr<<" °F.";
			
		}
		else if (choice_cnvrt==2){
			cout<<"\nEnter your temperature in Fahrenheit: ";
			cin>>fahr;
			
			final_cels= (fahr-32.0)*5/9;
			
			cout<<"\nYour converted temperature is "<<final_cels<<" °C.";
		}
		else {
			cout<<"Invalid option."<<endl;
			
		}
		
		cout<<"\nDo you wish to continue? (y/n): ";
		char c_loop;
		cin>>c_loop;
		if (c_loop == 'n'){
			break;
		}
		}
		
	}


else {
	cout<<"\nUsername or password is incorrect.";
	cout<<"\nAccess Denied. Please try again.";
}
		
	
return 0;
}

