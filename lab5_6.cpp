#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<char> d;
    string word;
    bool isPalindrome = true;

    cout << "Enter a word: ";
    cin >> word;

    for (char c : word) {
        d.push_back(c);
    }

    while (d.size() > 1) {
        if (d.front() != d.back()) {
            isPalindrome = false;
            break;
        }
        d.pop_front();
        d.pop_back();
    }

    if (isPalindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;

    return 0;
}
