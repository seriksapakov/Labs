#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int num;

    cout << "Enqueue: ";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        q.push(num);
    }

    cout << "Deque: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
