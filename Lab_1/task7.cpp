 #include <iostream>
#include <string>
using namespace std;

void task7() {
    string firstName, lastName, fullName;
    cout << "\nEnter your first name: ";
     cin.ignore();

    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    fullName = firstName;
    fullName.append(" ");
    fullName.append(lastName);

    cout << "Full name: " << fullName << endl;
}
