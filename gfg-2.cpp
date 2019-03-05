#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(type, n) for(type i = 0; i < n; i++)

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		ull n;
		cin >> n;
		ll sum = LLONG_MIN, cur_sum = 0;
		while (n--) {
			ll temp;
			cin >> temp;
			cur_sum += temp;
			if (cur_sum > sum) {
				sum = cur_sum;
			}
			if (cur_sum < 0) {
				cur_sum = 0;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}