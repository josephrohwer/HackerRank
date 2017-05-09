#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arrSize;
    cin >> arrSize;

	/*VARIABLE LENGTH ARRAY IS NOT STANDARD IN C++!!!*/
    int unreversed[arrSize];
    int reversed[arrSize];
    
    for (int i = 0; i < arrSize; i++) {
        int x;
        cin >> x;
        unreversed[i] = x;
    }
    
    int temp;
    for (int y = 0; y < arrSize; y++) {
        temp = unreversed[(arrSize - y - 1)];
        reversed[y] = temp;
    }
    

    for (int i = 0; i < arrSize; i++) {
        cout << reversed[i] << " ";
    }
    
    return 0;
}
