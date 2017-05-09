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

int main() {
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int max = -100;
    for (int i = 0; (i + 2) < 6; i++) {
        for (int x = 0; (x + 2) < 6; x++) {
            int sum = (arr[i][x] + arr[i][(x + 1)] + arr[i][(x + 2)] + 
                   arr[(i + 1)][(x + 1)] + 
                   arr[(i + 2)][x] + arr[(i + 2)][(x + 1)] + arr[(i + 2)][(x + 2)]);
            if (sum > max) {
                max = sum;
            }
        }
    }
    cout << max << endl;
    
    return 0;
}
