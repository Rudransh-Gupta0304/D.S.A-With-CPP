#include<bits/stdc++.h>

using namespace std;

void sum (int n ){
     int Total = 0;
     int Remainder = 0;

     while( n!= 0){
        Remainder = n %10;
        Total = Total + Remainder;
        n = n/10;
     }
     cout<< Total ;
}

int main (){
    int n ;
    cin>> n ;
    sum(n);
    return 0 ;
}