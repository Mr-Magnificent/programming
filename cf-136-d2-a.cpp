#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	int set[num];
	for (int i = 0; i < num; ++i)
	{
		int temp;
		cin >> temp;
		temp--;
		set[temp] = i + 1;
	}
	for (int i = 0; i < num; ++i)
	{
		cout << set[i] << " ";
	}
	cout << endl;
	return 0;
}