#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    while (n) {
        int temp = n % k + 97;
        cout << (char)temp;
        n--;
    }
    cout << endl;
    return 0;
}
