#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long n, b, d, sum = 0, tot = 0;
	cin >> n >> b >> d;
	for(unsigned long i = 0; i < n; i++) {
		unsigned long temp;
		cin >> temp;
		if (temp > b)
			continue;
		sum += temp;
		if (sum > d) {
			tot += 1;
			sum  = 0;
		}
	}
	cout << tot << "\n";
	return 0;
}