#include <iostream>
#include <vector>
 
using namespace std;
 
double average(const vector<int>& v) {
    double sum = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        sum += *it;
    }
    return sum / v.size();
}
 
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
 
    cout << "Average: " << average(nums) << endl;
 
    return 0;
}