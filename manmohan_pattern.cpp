#include <iostream>
using namespace std;
int main() {
	int n, start, start1, d;
	cin >> n;
	start = 1;
	d = 1;
	while (start <= n) {
		start1 = 1;
		while (start1 <= start) {
			if (start1 == 1 || start1 == start) {
				cout << 1;
			}
			else {
				cout << d;
			}
			start1 = start1 + 1;
		}

		cout << endl;
		start = start + 1;
		d = 1 - d;
	}

}