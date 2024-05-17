#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
double amt, disc1, disc2, disc3, net1, net2, net3;

cout<<"Input amount of purchase: ";
cin>>amt;

disc1 = (amt*0.05);
net1 = amt-(amt*0.05);
disc2 = (amt*0.1);
net2 = amt-(amt*0.1);
disc3 = (amt*0.15);
net3 = amt-(amt*0.15);

if (amt>=0 && amt<=1000){
	cout<<"You have received PHP"<<disc1<<" discount.";
	cout<<"\nAmount to pay is PHP"<<net1<<" in total.";
}
else if (amt>1000 && amt<5000){
	cout<<"You have received PHP"<<disc2<<" discount.";
	cout<<"\nAmount to pay is PHP"<<net2<<" in total.";
}
else if (amt>=5000) {
	cout<<"You have received PHP"<<disc3<<" discount.";
	cout<<"\nAmount to pay is PHP"<<net3<<" in total.";
}
else;

return 0;
}
