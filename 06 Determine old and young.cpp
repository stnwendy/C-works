#include <iostream>
#include <cmath>
using namespace std;
int main()
{

float age1, age2, age3, old, young;

cout<< "Input user A age: ";
cin>>age1;

cout<< "Input user B age: ";
cin>>age2;

cout<< "Input user C age: ";
cin>>age3;


if (age1>age2 && age1>age3 && age2>age3){cout<<"User A is the eldest and User C is the youngest. ";
}
else if (age1>age2 && age1>age3 && age3>age2){cout<<"User A is the eldest and User B is the youngest. ";
}
else if (age2>age1 && age2>age3 && age3>age1){cout<<"User B is the eldest and User A is the youngest. ";
}
else if (age2>age1 && age2>age3 && age1>age3){cout<<"User B is the eldest and User C is the youngest. ";
}
else if (age3>age1 && age3>age2 && age2>age1){cout<<"User C is the eldest and User A is the youngest. ";
}
else {cout<<"User C is the eldest and User B is the youngest. ";
}

return 0;

}

