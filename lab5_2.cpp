#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> s;
    string str;

    cout << "Enter: ";
    cin >> str;

    for (char c : str) {
        s.push(c);
    }

    cout << "Reversed: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}
