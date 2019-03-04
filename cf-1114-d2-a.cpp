#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned long x, y, z;
	unsigned long a, b, c;
	cin >> x >> y >> z;
	cin >> a >> b >> c;
	if (a >= x) {
		a -= x;
		if ((a + b) >= y) {
			unsigned long tot = a + b + c;
			tot -= (y);
			if (tot >= z) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		} else {
			cout << "NO\n";
		}
	} else {
		cout << "NO\n";
	}
}