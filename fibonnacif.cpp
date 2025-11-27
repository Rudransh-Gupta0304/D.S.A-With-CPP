#include<bits/stdc++.h>
using namespace std;

void printNum(int n ){
    int a=0 , i =0 , b=1 , c;
    for(i ; i <n ; i++){
        cout<< a <<" ";
        c = a+b;
        a=b;
        b=c;
    }
}

int main (){
    int n ;
    cin >>n ;
    printNum(n);
    return 0;
}