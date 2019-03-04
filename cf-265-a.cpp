#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s, t;
	cin >> s;
	cin >> t;
	int ind = 0, counter = 0;
	for(int i = 0; i < t.length(); i++) {
		if (ind == (t.length()))
			break;
		if (t[i] == s[ind]) {
			counter++;
			// cout << s[i] << t[ind] << "\n";
			// cout << i << ind;
			ind++;
		}
	}

	cout << counter + 1 << "\n";
	return 0;
}