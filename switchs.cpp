#include <iostream>
using namespace std;

int main(){
    int day;
    cout<<"enter a number (1-7): ";
    cin>>day;
    switch (day) {
        case 1 : cout<<"sunday" ; break;
        case 2 : cout<<"monday" ; break;
        case 3 : cout<<"tuesday" ; break;
        case 4 : cout<<"wednesday" ; break;
        case 5 : cout<<"thursday" ; break;
        case 6 : cout<<"friday" ; break;
        case 7 : cout<<"saturady" ; break;
        default : cout<< "invalid input ! please enter number between 1 and 7" ;
    }
    return 0 ;
}