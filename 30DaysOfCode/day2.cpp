#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//its because in the last case the input is as follows: 10.25 17 5 the result will be:12.505 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost;
    double tipPercent;
    double taxPercent;
    
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    
    double totalCost = round((mealCost + (mealCost * (tipPercent / 100)) + (mealCost * (taxPercent / 100))));

    cout << "The total meal cost is " << totalCost << " dollars." << endl;
        
    return 0;
}
