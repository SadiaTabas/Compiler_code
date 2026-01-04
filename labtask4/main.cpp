// State Mapping from your drawing:
// State 0: {0, 1, 3, 4} (Start)
// State 1: {2, 3, 4}
// State 2: {5, 6, 7, 8, 9, 20} (Accepting)
// State 3: {10}
// State 4: {12, 13, 14, 15}
// State 5: {11, 19, 20, 7, 8, 9} (Accepting)
// State 6: {16, 18, 19, 20, 7, 8, 9} (Accepting)
// State 7: {17, 18, 19, 20, 7, 8, 9} (Accepting)
// State 8: Dead/Trap State (Phi)




#include <iostream>
#include <string>

using namespace std;
int main() {
    string input;
    cout << "Enter the string (using only 'a' and 'b'): ";
    cin >> input;

    int currentState = 0;

    for (int i = 0; i < input.length(); i++) {
        char symbol = input[i];


        if (currentState == 0) {
            if (symbol == 'a') currentState = 2;
            else if (symbol == 'b') currentState = 1;
        }
        else if (currentState == 1) {
            if (symbol == 'a') currentState = 2;
            else if (symbol == 'b') currentState = 8;
        }
        else if (currentState == 2) {
            if (symbol == 'a') currentState = 5;
            else if (symbol == 'b') currentState = 3;
        }
        else if (currentState == 3) {
            if (symbol == 'a') currentState = 4;
            else if (symbol == 'b') currentState = 8;
        }
        else if (currentState == 4) {
            if (symbol == 'a') currentState = 6;
            else if (symbol == 'b') currentState = 7;
        }
        else if (currentState == 5 || currentState == 6 || currentState == 7) {

            if (symbol == 'a') currentState = 5;
            else if (symbol == 'b') currentState = 3;
        }
        else if (currentState == 8) {
            currentState = 8;
        }
    }


    if (currentState == 2 || currentState == 5 || currentState == 6 || currentState == 7) {
        cout << "Result: String Accepted!" << endl;
    } else {
        cout << "Result: String Rejected." << endl;
    }

    return 0;
}
