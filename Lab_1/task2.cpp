

#include <iostream>
#include <string>
using namespace std;


bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=');
}

void task2() {
    string input;
    cout << "Enter expression: ";
    cin >> input;

    int c = 1;
    for (int i = 0; i < input.length(); i++) {
        if (isOperator(input[i])) {
            cout << "operator" << c<< ": " << input[i] << endl;
            c++;
        }
    }

    if (c == 1) {
        cout << "No operators found." << endl;
    }

    cout<<endl;
}
