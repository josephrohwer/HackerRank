#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    // your code goes here
    string sArr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};   
    
    if (n >= 1 && n <= 9) {
        cout << sArr[(n - 1)] << endl;
    } else if (n > 9) {
        cout << "Greater than 9" << endl;
    } else {
        cout << "Less than 1" << endl;
    }
    
    return 0;
}
