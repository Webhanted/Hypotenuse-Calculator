#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
using namespace std;
int a,b,c2,c;
cout << "Enter height: ";
cin >> a;
cout << "Enter length: ";
cin >> b;
c2=(a*a)+(b*b);
c=sqrt(c2);
cout << "Hypotenuse: "<<c;
cout << "\nPress any key to finish..";
getch();
return 0;
}
