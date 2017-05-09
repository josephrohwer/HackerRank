#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfWords = 0;
    cin >> numberOfWords;
    
    vector<string> words;
    for (int i = 0; i < numberOfWords; i++) {
        string word = "";
        cin >> word;
        words.push_back(word);
    }
    
    for (unsigned int i = 0; i < words.size(); i++) {
        string endResult = "";
        string wordToSplice = words[i];
        for (unsigned int x = 0; x < wordToSplice.size(); x += 2) {
            endResult += wordToSplice.at(x);
        }
        endResult += " ";
        for (unsigned int y = 1; y < wordToSplice.size(); y += 2) {
            endResult += wordToSplice.at(y);
        }
        cout << endResult << endl;
    }
    
    return 0;
}
