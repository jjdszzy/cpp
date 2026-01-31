#include <iostream>
using namespace std;
int a[101];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a[x]++;
	}
	int _max = -1;
	for (int i = 1; i <= 100; i++) {
		if (a[i] == 1) _max = i;
	}
	cout << _max;
	return 0;
}