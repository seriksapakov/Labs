#include <iostream>
#include <set>
 
using namespace std;
 
int main() {
    set<int> s;
    int num;
 
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        s.insert(num);
    }
 
    cout << "Enter a number to search: ";
    cin >> num;
    if (s.find(num) != s.end())
        cout << num << " exists in the set." << endl;
    else
        cout << num << "not exist in the set." << endl;
 
    cout << "All elements: ";
    for (int n : s)
        cout << n << " ";
    cout << endl;
 
    return 0;
}