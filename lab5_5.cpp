#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_front(10);
    d.push_back(20);
    d.push_front(5);

    cout << "Deque contains: ";
    for (int x : d) {
        cout << x << " ";
    }
    cout << endl;

    d.pop_back();   
    d.pop_front(); 

    cout << "Remaining: ";
    for (int x : d) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
