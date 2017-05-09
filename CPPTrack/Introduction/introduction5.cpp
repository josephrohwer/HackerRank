#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    // Complete the code.
    string sArr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a;
    int b;
    cin >> a;
    cin >> b;
    
    for (int i = a; i <= b; i++ ) {
        if (i >= 1 && i <= 9) {
            cout << sArr[(i - 1)] << endl;
        } else if (i > 9) {
            if ((i % 2) == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    
    return 0;
}
