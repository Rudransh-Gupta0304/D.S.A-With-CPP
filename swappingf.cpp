#include<bits/stdc++.h>
using namespace std;

void swap(int x , int y){
    int t =x;
    x= y ;
    y= t;
    cout<<"after swaping in function  x : "<<x <<" y : "<<y << endl;
}
int main(){
    int x =5 , y =7;

    cout<<"before swapping";
    cout<<" x :"<< x <<  " y :"<<endl;

    swap(x,y);

    cout<<"after swapping";
    cout<<" x "<< x <<" y :"<< y <<endl;

    return 0;
}

