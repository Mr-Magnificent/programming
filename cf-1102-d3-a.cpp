#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long x;
	bool flag = true;
	cin >> x;
	if (x == 0) {
		cout << 0 << "\n";
		return 0;
	}
	x = ceil(x / 2.0);
	// cout << x << " ";
	if (x % 2 == 1) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}