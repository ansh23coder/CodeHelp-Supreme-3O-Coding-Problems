#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = {5, 1, 8, 6, 9, 2};

	// Sort in descending order
	auto it = find_if(v.begin(), v.end(), [] (const int& a) {
		return a % 3 == 0;
	});

    if (it != v.end()) cout << *it;
	else cout << "No such element";
	return 0;
}
// 6