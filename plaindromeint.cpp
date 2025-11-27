#include <bits/stdc++.h>
using namespace std;
void num(int n){
    int original; 
    int digit;
    int reverse =0;
    original = n;
    int temp = n;
    while(temp!=0){
        digit  = temp%10;
        reverse = reverse*10 + digit;
        temp /= 10;
    }
    if(reverse==original){
        cout<<"number is palindrome";   
    }
    else{
        cout<<"no. is not palindrome ";
    }
}
int main(){
    num(111);
    return 0;
}