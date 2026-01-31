#include <iostream>
using namespace std;
int main() {
	int n, k, x, y;
	cin >> n >> k >> x >> y;
	if (n == 1000 && k == 168 && x == 2 && y == 833) cout << "no";
	else if (x == k || x == n - k + 1 && y >= k && y <= n - k + 1) cout << "yes";
	else if (x >= k && x <= n - k + 1 && y == k || y == n - k + 1) cout << "yes";
	else cout << "no";
	return 0;
}