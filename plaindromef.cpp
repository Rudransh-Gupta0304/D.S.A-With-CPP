#include<bits/stdc++.h>

using namespace std;

void plaindrome(string str){
    string rev = str ;
    reverse(rev.begin() , rev.end());
    if(str== rev){
        cout<<"plaindrome"<<endl;
    }
    else{
        cout<<"not a plaindrome"<<endl;
    }
}

int main (){
    string str ;
    cout<<"enter the string : ";
    cin>>str;
    plaindrome(str);
    return 0;

}