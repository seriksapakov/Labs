#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    srand(time(0)); 
    int secret = rand() % 100 + 1; 

    int guess;
    cout << "ugadai" << endl;

    while (true) {
        cout << "variant: ";
        cin >> guess;

        if (guess < secret) {
            cout << "more" << endl;
        } else if (guess > secret) {
            cout << "less" << endl;
        } else {
            cout << "ugadal,congratulations" << endl;
            break;
        }
    }

    return 0;
}
