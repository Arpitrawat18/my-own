#include <iostream>
using namespace std;
int main() {
	int n, start, count;
	cin >> n;
	start = 1;
	count = 1;
	while (start <= n) {
		count = 1;
		while (count <= start) {
			cout << count << " ";
			count = count + 1;
		}
		cout << endl;
		start = start + 1;
	}
}