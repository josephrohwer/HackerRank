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
    
    vector<int> binaryNumber;
    
    int remainder;
    while(n > 0) {
        remainder = n%2;
        n = n/2;
        binaryNumber.push_back(remainder);
    }
    
    int consecutiveOnes = 1;
    int biggestConsecutive = 1;
    for (unsigned int i = 0; (i + 1) < binaryNumber.size(); i++) {
        if (binaryNumber[i] == 1 && binaryNumber[(i + 1)] == 1) {
            consecutiveOnes++;
            if (consecutiveOnes > biggestConsecutive) {
                biggestConsecutive = consecutiveOnes;
            }
        } else {
            consecutiveOnes = 1;
        }
    }
    cout << biggestConsecutive << endl;
    
    return 0;
}
