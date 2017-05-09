#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    stringstream ss(str);
    char ch;
    vector<int> parsedInts;
    int a;
    
    while (ss >> a) {
        ss >> ch;
        parsedInts.push_back(a);
    }
    return parsedInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(unsigned int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
