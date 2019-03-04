#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int arr[n] = {0};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int times;
	cin >> times;
	for (int i = 0; i < times; i++) {
		int bird, row;
		cin >> row >> bird;
		row -= 1;
		arr[row - 1] += bird - 1;
		arr[row + 1] += arr[row] - bird;
		arr[row] = 0;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
	cout << "\n";
	return 0;
}