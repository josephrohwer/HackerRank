#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int actualDay;
	int actualMonth;
	int actualYear;

	int expectedDay;
	int expectedMonth;
	int expectedYear;

	cin >> actualDay >> actualMonth >> actualYear >> expectedDay >> expectedMonth >> expectedYear;

	int fine;

	if (actualDay <= expectedDay && actualMonth == expectedMonth && actualYear == expectedYear) {
		fine = 0;
	}

	if (actualDay >= expectedDay && actualMonth == expectedMonth && actualYear == expectedYear) {
		fine = 15 * (actualDay - expectedDay);
	}

	if (actualMonth > expectedMonth && actualYear == expectedYear) {
		fine = 500 * (actualMonth - expectedMonth);
	}

	if (actualYear > expectedYear) {
		fine = 10000;
	}

	cout << fine << endl;

	return 0;
}
