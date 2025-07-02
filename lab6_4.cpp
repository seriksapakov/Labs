#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4, 1, 2, 4, 6, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int value;
    cout << "Find: ";
    cin >> value;

    int countVal = count(arr, arr + n, value);
    cout << "Count of " << value << ": " << countVal<< endl;

    int minVal = *min_element(arr, arr + n);
    int maxVal = *max_element(arr, arr + n);

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
