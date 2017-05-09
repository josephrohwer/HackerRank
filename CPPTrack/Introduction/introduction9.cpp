#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int sizeOfVector;
    int numOfQueries;
    
    cin >> sizeOfVector;
    cin >> numOfQueries;
    
    vector<vector<int>> dynamicVector;

    for (int i = 0; i < sizeOfVector; i++) {
        vector<int> numOfContents; 
        int sizeOfVariable;
        cin >> sizeOfVariable;
        for(int i = 0; i < sizeOfVariable; i++) {
            int contents;
            cin >> contents;
            numOfContents.push_back(contents);
        }
        dynamicVector.push_back(numOfContents);
    }

    for (int i = 0; i < numOfQueries; i++) {
        int indexQuery;
        int indexPosition;
        
        cin >> indexQuery;
        cin >> indexPosition;
        
        cout << dynamicVector[indexQuery][indexPosition] << endl;
    }
    
    return 0;
}
