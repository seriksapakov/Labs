#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    vector<int> v(20);
    for (int i = 0; i < 20; i++)
        v[i] = i + 1;
 
    reverse(v.begin(), v.end());
 
    cout << "Reversed vector: ";
    for (int n : v)
        cout << n << " ";
    cout << endl;
 
    int evenCount = count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    cout << " even numbers: " << evenCount << endl;
 
    v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 3 == 0; }), v.end());
 
    cout << "Vector after removing divisible by 3: ";
    for (int n : v)
        cout << n << " ";
    cout << endl;
 
    return 0;
}