#include<bits/stdc++.h>
using namespace std;

int maxfun(int a, int b) {
	return a > b ? a : b;
}

void gcd(int x, int six) {
	int max = 0;
	for (int i = 1; i <= 6; i++) {
		if (x % i == 0 && six % i == 0) {
			max = i;
		}
	}
	cout << (x / max) << "/" << (six / max) << "\n";
}

int main(int argc, char const *argv[])
{
	int n1, n2;
	cin >> n1 >> n2;
	int max = maxfun(n1, n2);
	int diff = 7 - max;
	gcd(diff, 6);
	return 0;
}

