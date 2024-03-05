#include <iostream>
using namespace std;
int main() {
	int n, start, start1 , bc;
	cin >> n;
	start = 1;
	while (start <= n) {
		start1 = 1;
		bc = (2 * n - 1) - (start1 - 1);
		while (start1 <= 2 * n - 1) {
			bc = (2 * n - 1) - (start1 - 1);
			if (start1 <= start)
			{
				cout << start1 << " ";
			}
			else if (start1 > (2 * n - 1) - start) {
				cout << bc << " ";
				bc = bc - 1;

			}
			else {
				cout << "  ";
			}

			start1 = start1 + 1;

		}

		cout << endl;
		start = start + 1;
	}

}