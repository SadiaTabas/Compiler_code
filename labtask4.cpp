

#include <iostream>
#include <string>
using namespace std;

bool identifier() {
    string input;
    getline(cin, input);


    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          input[0] == '_')) {
        return false;
    }


    for (int i = 1; i < input.length(); i++) {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << "Enter a string: ";
    if (identifier()) {
        cout << "Valid identifier" << endl;
    } else {
        cout << "Not a valid identifier" << endl;
    }

    return 0;
}

