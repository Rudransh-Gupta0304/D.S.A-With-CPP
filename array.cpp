#include <bits/stdc++.h>
using namespace std;

int main() {
     int arr[5];
    int sum = 0;

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
        sum += arr[i];

    }
    cout << endl << "Sum = " << sum;
    cout << endl;
    return 0;

}

// #include<iostream>
// using namespace std;

// int main (){
//     int arr[5]={5,10,15,20,25};
//     arr[2]=50;
//     cout<<arr[2]<<endl;
// }

// int main (){
//     int arr[4]= {4,8,12,16 };
// }
