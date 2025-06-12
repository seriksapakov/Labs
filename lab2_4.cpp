#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    string input, clean = "";

    cout << "txt: ";
    getline(cin, input); 

    for (char c : input) {
        if (c != ' ') {
            clean += tolower(c);
        }
    }

    string reversed = string(clean.rbegin(), clean.rend());

    if (clean == reversed) {
        cout << "palindrome!" << endl;
    } else {
        cout << "not palindrome" << endl;
    }

    return 0;
}

