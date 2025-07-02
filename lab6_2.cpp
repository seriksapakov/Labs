#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;  // базовый случай
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);  // рекурсивный вызов
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output: " << fibonacci(n) << endl;
    return 0;
}
