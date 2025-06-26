#include <iostream>
#include <map>
#include <sstream>
#include <string>
 
using namespace std;
 
int main() {
    string text;
    cout << " sentence: ";
    getline(cin, text);
 
    map<string, int> wordCount;
    stringstream ss(text);
    string word;
 
    while (ss >> word) {
        wordCount[word]++;
    }
 
    cout << "Word :" << endl;
    for (const auto& pair : wordCount) {
        cout << pair.first << " -> " << pair.second << endl;
    }
 
    return 0;
}