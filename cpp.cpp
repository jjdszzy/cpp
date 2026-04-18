#include <iostream>
using namespace std;
int main() {
	int m, n;
	cin >> n >> m;
	int cnt = 0;
	for (int i = 1; i <= n - 2 && i <= (m - 2) / 3; i++) {
		int j2 = 3 * m - n - 8 * i;
		int k2 = 6 * i - 3 * m + 3 * n;
		if (j2 % 2 == 0 && k2 % 2 == 0 && j2 > 1 && k2 > 5) cnt++;
	}
	cout << cnt;
	return 0;
}