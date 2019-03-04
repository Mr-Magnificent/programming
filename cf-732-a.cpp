#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int price, change, tot = 0;
	cin >> price >> change;
	for (int i = 1; i <= 11; i++) {
		if((price * i) % 10 == 0 || ((price * i) - change) % 10 == 0) {
			cout << i<< "\n";
			break;
		}
	}
	return 0;
}