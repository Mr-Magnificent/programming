#include<iostream>
#include<unordered_set>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define f(type, n) for(type i = 1; i < n; i++)

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		ll n, sum = 0, sumExp;
		cin >> n;
		f(ull, n) {
			ull temp;
			cin >> temp;
			sum += temp;
		}
		sumExp = (n * ( n + 1 )) / 2;
		cout << sumExp - sum << "\n";
	}
	return 0;
}