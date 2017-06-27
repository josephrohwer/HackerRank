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
#include <unordered_map>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> names;

	for (int a0 = 0; a0 < N; a0++) {
		string firstName;
		string emailID;
		cin >> firstName >> emailID;

		if (emailID.find("@gmail.com") != string::npos) {
			// Sorting names alphabetically.
			names.push_back(firstName);
			sort(names.begin(), names.end());
		}
	}

	sort(names.begin(), names.end());

	for (vector<string>::iterator it = names.begin(); it != names.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}
