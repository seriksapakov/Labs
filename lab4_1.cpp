#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main() {
    srand(time(0));
    vector<int> vec(10);

 
    for(int &num : vec)
        num = rand() % 100 + 1;
    cout << "Original vector: ";
    for(int num : vec)
        cout << num << " ";
    cout << endl;

    sort(vec.begin(), vec.end());
    cout << "Sorted vector: ";
    for(int num : vec)
        cout << num << " ";
    cout << endl;
 

    cout << "Min: " << *min_element(vec.begin(), vec.end()) << endl;
    cout << "Max: " << *max_element(vec.begin(), vec.end()) << endl;
 
 
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << "without duplicates: ";
    for(int num : vec)
        cout << num << " ";
    cout << endl;
 
    return 0;
}