#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int numberAmount = 0;
	cin >> numberAmount;

	for (int i = 0; i < numberAmount; i++) {
		int number = 0;
		cin >> number;
		int divisableCount = 0;
		string result = "Prime";
		for (int x = 2; x * x <= number; x++) {
			if (number % x == 0) { result = "Not prime"; }
		}
		if (number == 1) { result = "Not prime"; }
		cout << result << endl;
	}

	return 0;
}
