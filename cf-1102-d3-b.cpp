#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, n;
	cin >> a >> n;
	int arr[n] = {0};
	std::vector<int> v;
	map<int, int> obj;
	for(int i = 0; i < a; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		if (obj.find(temp) == obj.end()) {
			obj[temp] = 1;
			arr[0] = 1;
		} else {
			obj[temp] = obj[temp] + 1;
			arr[obj[temp] - 1] = 1;
			if (obj[temp] > n) {
				cout << "NO" << "\n";
				return 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			cout << "NO" << "\n";
			return 0;
		}
	}

	for (auto itr = obj.begin(); itr != obj.end(); ++itr) { 
        itr->second = 0;
    } 

    cout << "YES\n";
    for (int i = 0; i < a; i++) {
    	obj[v[i]] = obj[v[i]] + 1;
    	cout << obj[v[i]] << " ";
    }
    cout << "\n";
    return 0;
}