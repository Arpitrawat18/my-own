#include <iostream>
using namespace std;
int main() {
	int n, start, start1;
	cin >> n;
	start = 1;
	while (start <= n) {
		start1 = 1;
		while (start1 <= n) {
			if (start1 <= start)
			{
				cout << start << " ";
			}
			else {
				cout << start1 << " ";
			}
			start1 = start1 + 1;
		}
		cout << endl;
		start = start + 1;
	}

}