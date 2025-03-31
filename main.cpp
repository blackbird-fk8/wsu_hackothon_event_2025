#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Loop through rows
    for(int i = 1; i <= rows; i++) {
        // Loop through columns
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}