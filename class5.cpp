#include <iostream>
using namespace std;

int main() {
    int N;
    int milestone = 2;    
    cout << "Enter total steps taken today: ";
    cin >> N;

    if (N < 2) {
        cout << "\nNo even milestones reached yet!" << endl;
        return 0;
    }
    do {
        cout << milestone << endl;
        milestone += 2; 
    } while (milestone <= N);

    return 0;
}