#include <iostream>
using namespace std;
int a[1001];
bool ans[1001];
int main() {
	while (1) {
		int x;
		cin >> x;
		if (x == 0) break;
		a[x]++;
	}
	int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		if (a[i] != 0) {
			sum++;
			ans[i] = 1;
		}
		
	}
	cout << sum << endl;
	for (int i = 1; i <= 1000; i++) {
		if (ans[i] == 1) cout << i << ' ';
	}
	return 0;
}