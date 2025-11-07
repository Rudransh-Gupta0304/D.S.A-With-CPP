#include <iostream>
using namespace std;

int main(){
    
    int speed;
    cout<<"enter the speed "<<endl;
    cin>> speed;
    switch(speed){
        case 0 ... 60:cout<<"No Fine";
            break;
        case 61 ... 80:cout<<"100";
            break;
        case 81 ... 100 :cout<<"200";
            break;

        default : cout<<500 ;
    }
    return 0;
}

// input speed print fine based on 0 to 60 
// find 61to 80 ...100
// 81 to 100 ..... 200
// above 100 .... 500

// print numbers of days on that month





