#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	unordered_set<unsigned long> set;
	int tot = 0;
	for(int i = 0; i < 4; i++) {
		unsigned long temp;
		cin >> temp;
		if (set.find(temp) == set.end()) {
			set.insert(temp);
		} else {
			tot++;
		}
	}
	cout << tot << endl;
	return 0;
}