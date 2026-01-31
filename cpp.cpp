#include <iostream>
using namespace std;
int buy[10001];
int re[10001];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (x>0) buy[x]++;
		else re[-x]++;
	}
	int maxb = 0, maxr = 0;
	for (int i = 1; i <= 10000; i++) {
		if (buy[i] > maxb) maxb = buy[i];
		if (re[i] > maxr) maxr = re[i];
	}
	for (int i = 1; i <= 10000; i++) {
		if (buy[i] == maxb) cout << i << ' ';
	}
	cout << endl;
	for (int i = 1; i <= 10000; i++) {
		if (re[i] == maxr) cout << i << ' ';
	}
	return 0;
}