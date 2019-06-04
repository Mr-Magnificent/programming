#include<iostream>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define f(type, n) for(type i = 0; i < n; i++)


int main(int argc, char const *argv[])
{
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		 ull a0, a1, a2, n;
		 a0 = a1 = a2 = 0;
		 cin >> n;
		 f(ull, n) {
		 	int temp;
		 	cin >> temp;
		 	switch (temp) {
		 		case 0:
		 		a0++;
		 		break;
		 		case 1:
		 		a1++;
		 		break;
		 		case 2:
		 		a2++;
		 		break;
		 	}
		 }
		 f(ull, a0) {
		 	cout << "0 ";
		 }
		 f(ull, a1) {
		 	cout << "1 ";
		 }
		 f(ull, a2) {
		 	cout << "2 ";
		 }
		 cout << "\b\n";
	}
	return 0;
}