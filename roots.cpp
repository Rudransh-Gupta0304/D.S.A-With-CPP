#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter the coefficient of x2"<<endl;
    cin>>a;
    cout<<"Enter the coefficient of x"<<endl;
    cin>>b;
    cout<<"Enter the constant value of equation"<<endl;
    cin>>c;
     if (a==0){
         cout<<"This is not a quadratic equation";
     }
     else if (b*b-4*a*c>=0){
         cout<<"Real ROOts";
     }
     else {
         cout<<"imaginary roots";
     }
     return 0;
}
