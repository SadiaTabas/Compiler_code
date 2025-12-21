#include <iostream>
#include <string>
using namespace std;


bool isRE1(string s) {
    for (int i = 0; i < s.length(); i++)
        if (s[i] != 'a') return false;
    return true;
}


bool isRE2(string s) {
    return (s.length() == 1 && (s[0] == 'a' || s[0] == 'b'));
}


bool isRE3(string s) {
    for (int i = 0; i < s.length(); i++)
        if (s[i] != 'a' && s[i] != 'b') return false;
    return true;
}


bool isRE4(string s) {
    int n = s.length();
    if (n < 4) return false;

    int i = 0;


    while (i < n && (s[i] == 'a' || s[i] == 'b')) i++;


    if (i >= n || s[i] != 'c') return false;
    i++;


    if (i >= n || (s[i] != 'a' && s[i] != 'b')) return false;
    i++;


    if (i + 1 >= n) return false;
    string lastTwo = s.substr(i, 2);
    if (lastTwo == "aa" || lastTwo == "bb") return true;

    return false;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    bool matched = false;

    if (isRE1(input)) {
        cout << "Matches RE1: a*" << endl;
        matched = true;
    }
    if (isRE2(input)) {
        cout << "Matches RE2: (a+b)" << endl;
        matched = true;
    }
    if (isRE3(input)) {
        cout << "Matches RE3: (a+b)*" << endl;
        matched = true;
    }
    if (isRE4(input)) {
        cout << "Matches RE4: (a+b)*c(a+b)(bb+aa)" << endl;
        matched = true;
    }

    if (!matched) {
        cout << "The input string does not match any RE." << endl;
    }

    return 0;
}
