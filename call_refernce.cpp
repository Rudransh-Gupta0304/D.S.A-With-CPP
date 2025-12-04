#include<bits/stdc++.h> 
using namespace std;

void func(int & x ){
    x--;
}
int main (){
    int a = 10;
    cout<< a<< endl;
    func(a);
    cout<<a ;

    return 0;

}