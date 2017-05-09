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
using namespace std;

//If N is odd, print Weird
//If N is even and in the inclusive range of 2 to 5, print Not Weird
//If N is even and in the inclusive range of 6 to 20, print Weird
//If N is even and greater than 20, print Not Weird

int main() {
    int N;
    cin >> N;
    
    if ((N % 2) != 0 || ((N % 2) == 0 && N >= 6 && N <= 20) ) {
        cout << "Weird" << endl;
    } else if ((N % 2) == 0 && N >= 2 && N <= 5 || ((N % 2) == 0 && N > 20)) {
        cout << "Not Weird" << endl;
    }
    
    return 0;
}
