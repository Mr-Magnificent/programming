#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; unsigned long long x;
	int dis = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		char ch; long long int d = 0;
		cin >> ch;
		cin >> d;
		d = abs(d);
		switch(ch) {
			case '+':
				x += d;
				break;
			case '-':
				if (d > x) {
					dis++;
				} else {
					x -= d;
				}
				break;
			default:
				cout << "Idhar kaise aaya";
		}
	}
	cout << x << " " << dis << "\n";
	return 0;
}