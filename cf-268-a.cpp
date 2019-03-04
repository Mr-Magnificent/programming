#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> home;
	vector<int> away;
	int counter;
	cin >> counter;
	for(int i = 0; i < counter; i++) {
		int temp;
		cin >> temp;
		home.push_back(temp);
		cin >> temp;
		away.push_back(temp);
	}
	int tot = 0;
	// cout << home.size();
	for (int i = 0; i < home.size(); i++) {
		for (int j = 0; j < home.size(); j++) {
			if (home[i] == away[j]) {
				++tot;
			}
			// cout << home[i] << " " << away[j] << "\n";
		}
	}
	cout << tot << endl;
	return 0;
}