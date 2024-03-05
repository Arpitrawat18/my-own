#include <iostream>
using namespace std;
int main() {
	int n, start, start1, star, s;
	cin >> n;
	start = 1;
	star = n;

	while (start <= n) {
		start1 = 1;
		s = 1;
		while (start1 <= n) {
			if (star < start1)
			{
				while (s <= (2 * start) - 3) {
					cout << " *";
					s = s + 1;
				}
			}
			else {
				cout << start1 << " ";
			}
			start1 = start1 + 1;
		}
		star = star - 1;
		cout << endl;
		start = start + 1;
	}

}