#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int entries;
    cin >> entries;
    
    map<string, int> phoneBook;    
    for (int i = 0; i < entries; i++) {
        string nameInput;
        cin >> nameInput;
        int numberInput;
        cin >> numberInput;
        phoneBook[nameInput] = numberInput;
    }

    string name;
    while (cin >> name) {
        if (phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
