#include <iostream>
#include <string>
using namespace std;
int a[124];
int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i <= s.size()-1; i++) {
		int n = s[i];
		if ('a'<=n&&n<='z') {
			a[n]++;
		}
	}
	for (int i = 'a'; i <= 'z'; i++) {
		cout << (char)i << ':';
		for (int j = 1; j <= a[i]; j++) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}