#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, t, k, d;
	cin >> n >> t >> k >> d;
	int t1 = 0, t2 = d - t;
	int temp = n;
	if ((d / t + 1) * k >= n)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}