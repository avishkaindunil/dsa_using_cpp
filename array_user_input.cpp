#include <iostream>

using namespace std;

int main() {
    int arrOne[5]; 

    cout << " \n" ; 
    cout << "Enter 5 integers for the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> arrOne[i]; 
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arrOne[i] << " " ;
    }

    cout << " \n" << endl; 
    return 0;
}
