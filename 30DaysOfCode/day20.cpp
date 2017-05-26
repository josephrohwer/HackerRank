#include <stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	// Write Your Code Here
	int numberOfSwaps = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				numberOfSwaps++;
			}
		}
		if (numberOfSwaps == 0) {
			break;
		}
	}

	int firstElement = a[0];
	int lastElement = a[(n - 1)];

	cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;
	cout << "First Element: " << firstElement << endl;
	cout << "Last Element: " << lastElement << endl;

	return 0;
}
