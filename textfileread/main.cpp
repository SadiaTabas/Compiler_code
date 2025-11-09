
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("input.txt");
    if (!file) {
        cout << "Cannot open file.\n";
        return 1;
    }

    string line;
    while (getline(file, line)) {
        if (line == "END") break;

        bool valid = true;

        if (line == "") valid = false;
        else {

            if (!((line[0] >= 'A' && line[0] <= 'Z') ||
                  (line[0] >= 'a' && line[0] <= 'z') ||
                  line[0] == '_')) {
                valid = false;
            }


            for (int i = 1; i < line.length(); i++) {
                if (!((line[i] >= 'A' && line[i] <= 'Z') ||
                      (line[i] >= 'a' && line[i] <= 'z') ||
                      (line[i] >= '0' && line[i] <= '9') ||
                      line[i] == '_')) {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
            cout << line << " is a valid identifier\n";
        else
            cout << line << " is NOT a valid identifier\n";
    }

    file.close();
    return 0;
}

