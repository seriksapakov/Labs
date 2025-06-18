#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int b;
    cout << "find this number: ";
    cin >> b;

    int index = -1; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == b) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "number at index " << index << endl;
    } else {
        cout << "not found" << endl;
    }

    return 0;
}
