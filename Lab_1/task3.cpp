#include <iostream>
#include <string>
using namespace std;


bool isComment() {
    string line;
    getline(cin, line);


    if (line.length() >= 2 && line[0] == '/' && line[1] == '/') {
        return true;
    }

    if (line.length() >= 2 && line[0] == '/' && line[1] == '*'&& line[line.length() - 2] == '*' && line[line.length() - 1] == '/') {
        return true;
    }

    return false;
}


int task3() {
     cin.ignore();
    cout << "Enter a line of code: ";
    if (isComment()) {
        cout << "This is a comment line." << endl;
    } else {
        cout << "This is not a comment line." << endl;
    }


}
