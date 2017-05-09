#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int factorial(int toFactor) {
    for (int i = toFactor - 1; i > 0; --i) {
        toFactor *= i;
    }
    return toFactor;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int toFactor;
    cin >> toFactor;
    
    cout << factorial(toFactor) << endl;
    
    return 0;
}
