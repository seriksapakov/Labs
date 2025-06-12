#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "VVedite: ";
    getline(cin, text);

    int i = 0;
    int a = 0;

    while (i < text.length()) {
        char c = tolower(text[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            a++;
            cout<<text[i]<<endl;
        }
        i++;
    }

    cout << "kolichestvo glasnykh: " << a << endl;

    return 0;
}
