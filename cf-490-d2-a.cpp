#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll tot = n;
    ull a, b, c;
    a = b = c = 0;
    vector<int> v1, v2, v3;
    while (n)
    {
        int temp;
        cin >> temp;
        switch (temp)
        {
        case 1:
            a++;
            v1.push_back(abs((tot + 1) - n));
            break;
        case 2:
            b++;
            v2.push_back(abs((tot + 1) - n));
            break;
        case 3:
            c++;
            v3.push_back(abs((tot + 1) - n));
            break;
        }
        n--;
    }
    int small = min(a, min(b, c));
    cout << small << "\n";
    while (small--)
    {
        cout << v1.back() << " " << v2.back() << " " << v3.back() << endl;
        v1.pop_back();
        v2.pop_back();
        v3.pop_back();
    }
    return 0;
}
