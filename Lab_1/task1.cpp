 #include <iostream>
#include <string>
using namespace std;

bool isNum() {
    string c;
    cin >> c;
    for (int i = 0; i < c.length(); i++) {
        if (c[i] > 47 && c[i] < 57) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

void task1() {
    cout << "Task 1: Check if input is numeric\n";
    bool result = isNum();
    if(result) {
        cout << "The input is Numeric." << endl << endl;
    } else {
        cout << "The input is not Numeric." << endl << endl;
    }
}
