#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(type, n, start) for(type i = start; i < n; i++)

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		ull n;
		cin >> n;
		ull arr[n], sum[n];
		cin >> sum[0];
		f(ull, n, 1) {
			ull temp;
			cin >> temp;
			sum[i] = sum[i-1] + temp;
		}
		if (n == 1) {
			cout << 1 << "\n";
			continue;
		}
		bool found = false;
		f(ull, n, 0) {
			if ((sum[n-1] - sum[i]) == (sum[i - 1])) {
				cout << i + 1 << "\n";
				found = true;
			}
			// cout << (sum[n-1] - sum[i]) <<  " " <<  (sum[i - 1]) << "\n";
		}
		if(!found) {
			cout << "-1\n";
		}
	}
	return 0;
}