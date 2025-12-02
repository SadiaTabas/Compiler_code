#include <iostream>
#include <fstream>
#include <string>

using namespace std;


string keywords[] = {"int", "float", "double", "char", "void", "return", "if", "else",
                     "for", "while", "do", "main","long","cout", "endl"};


bool isKeyword(string word) {
    for (int i = 0; i < 15; i++) {
        if (word == keywords[i])
            return true;
    }
    return false;
}

bool isIdentifier(string word) {
if (word == "") return false;
if ((word[0] >= 'A' && word[0] <= 'Z') ||
(word[0] >= 'a' && word[0] <= 'z') ||
word[0] == '_') {
for (int i = 1; i < word.length(); i++) {
if (!((word[i] >= 'A' && word[i] <= 'Z') ||
(word[i] >= 'a' && word[i] <= 'z') ||
(word[i] >= '0' && word[i] <= '9') ||word[i] == '_'))
return false;
        }
return true;
}
return false;
}


bool isConstant(string word) {
if (word == "") return false;
int dotCount = 0;
for (int i = 0; i < word.length(); i++) {
if (word[i] >= '0' && word[i] <= '9') {
continue;
} else if (word[i] == '.') {
dotCount++;
if (dotCount > 1) return false;
} else {
return false;
        }
    }
return true;
}

bool isOperator(char ch) {
char operators[] = {'+', '-', '*', '/', '%', '=', '<', '>', '!', '&', '|', '^'};
for (int i = 0; i < 13; i++)
if (ch == operators[i])
return true;
return false;
}


bool isPunctuation(char ch) {
char punctuations[] = {';', ',', '{', '}', '(', ')', '[', ']'};
for (int i = 0; i < 8; i++)
if (ch == punctuations[i])
return true;
return false;
}

int main() {
ifstream file("input.txt");
if (!file) {
cout << "Cannot open file.\n";
return 1;
    }

string line;
bool startMain = false;

while (getline(file, line)) {
string word = "";
bool inString = false;

for (int i = 0; i < line.length(); i++) {
char ch = line[i];


if (ch == '"') {
if (!inString) {
inString = true;
word = "\"";} else {
inString = false;
word += "\"";
cout << word << " is a Literal\n";
word = "";
}
continue;
            }

if (inString) {
word += ch;
continue;
}

if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
(ch >= '0' && ch <= '9') || ch == '_' || ch == '.') {
word += ch;
} else {
if (word != "") {
if (isKeyword(word))
cout << word << " is a Keyword\n";
else if (startMain && isIdentifier(word))
cout << word << " is an Identifier\n";
else if (startMain && isConstant(word))
cout << word << " is a Constant\n";
if (!startMain && word == "int") {
string nextWord = "";
int j = i + 1;
while (j < line.length() && (line[j] == ' ' || line[j] == '\t')) j++;
while (j < line.length() && ((line[j] >= 'A' && line[j] <= 'Z') || (line[j] >= 'a' && line[j] <= 'z') || line[j]=='_' || (line[j]>='0' && line[j]<='9'))) {
nextWord += line[j];
j++;
}
if (nextWord == "main")
startMain = true;
                    }

word = "";
                }

if (startMain && isOperator(ch))
cout << ch << " is an Operator\n";
else if (startMain && isPunctuation(ch))
cout << ch << " is a Punctuation\n";
            }
}


if (word != "") {
if (isKeyword(word))
cout << word << " is a Keyword\n";
else if (startMain && isIdentifier(word))
cout << word << " is an Identifier\n";
else if (startMain && isConstant(word))
cout << word << " is a Constant\n";
        }
    }

    file.close();
    return 0;
}
