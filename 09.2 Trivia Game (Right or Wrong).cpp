#include <iostream>
#include <cmath>
using namespace std;
int main ()
{

string ans1;
float ans2, ans3, ans4, ans5;
int scr=0;

cout<<"\nWhat is the capital of Japan? ";
cout<<"\nEnter your answer: ";		
cin>>ans1;

if (ans1=="Tokyo" || ans1=="Tokyo."|| ans1=="TOKYO" || ans1=="TOKYO."|| ans1=="tokyo"||ans1=="tokyo."){
	cout<<"You got the correct answer. Congratulations!"<<endl;
	scr=scr+1;
}
else {
	cout<<"Oops the answer you entered is wrong."<<endl;
}


cout<<"\nWhat is 10 divided by 5? ";
cout<<"\nEnter your answer: ";		
cin>>ans2;

if (ans2==2){
	cout<<"You got the correct answer. Congratulations!"<<endl;
	scr=scr+1;
}
else {
	cout<<"Oops the answer you entered is wrong." <<endl;
}


cout<<"\nHow many stars are there in the American Flag ? ";
cout<<"\nEnter your answer: ";		
cin>>ans3;

if (ans3==50){
	cout<<"You got the correct answer. Congratulations!" <<endl;
	scr=scr+1;
}
else {
	cout<<"Oops the answer you entered is wrong." <<endl;
}


cout<<"\nWhat is 60+7? ";
cout<<"\nEnter your answer: ";		
cin>>ans4;

if (ans4==67){
	cout<<"You got the correct answer. Congratulations!"<<endl;
	scr=scr+1;
}
else {
	cout<<"Oops the answer you entered is wrong."<<endl;
}


cout<<"\nWhat is the latest constitution of the Philippines? ";
cout<<"\nEnter your answer: ";		
cin>>ans5;

if (ans5==1987){
	cout<<"You got the correct answer. Congratulations!"<<endl;
	scr=scr+1;
}
else {
	cout<<"Oops the answer you entered is wrong."<<endl;
}

cout<<"\nYou got "<<scr<<" correct answers.";
cout<<"\nThank you for participating.";


return 0;
}
