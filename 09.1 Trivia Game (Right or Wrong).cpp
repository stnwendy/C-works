#include <iostream>
#include <cmath>
using namespace std;
int main ()
{

string ans1;
int ans2;
int scr=0;	//global variable???


cout<<"\nWhat is the capital of Japan? ";
cout<<"\nEnter your asnwer: ";		
cin>>ans1;

if (ans1=="Tokyo" || ans1=="Tokyo."|| ans1=="TOKYO" || ans1=="TOKYO."|| ans1=="tokyo"||ans1=="tokyo."){
	cout<<"You got the correct answer. Congratulations!" << endl;
	scr=scr+1;
	}
	
	
else {
	cout<<"Oops the answer you entered is wrong." << endl;
}

cout<<"\nWhat is 10 divided by 5? ";
cout<<"\nEnter your answer: ";		
cin>>ans2;

if (ans2==2){
	cout<<"You got the correct answer. Congratulations!" << endl;
	scr=scr+1;
}
else {
	cout<<"Oops the answer you entered is wrong." << endl;
}


cout<<"\nYou got "<<scr<<" correct answers" << endl;


return 0;
}
