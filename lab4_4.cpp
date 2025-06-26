#include <iostream>
#include <stack>
#include <string>
 
using namespace std;
 
int main() {
    string a;
    cout << "Enter : ";
    cin >> a;
 
    stack<char> s;
    bool correct = true;
 
    for (char c : a) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty()) {
                correct = false;
                break;
            }
            s.pop();
        }
    }
 
    if (correct && s.empty())
        cout << "Correct" << endl;
    else
        cout << "Incorrect" << endl;
 
    return 0;
}