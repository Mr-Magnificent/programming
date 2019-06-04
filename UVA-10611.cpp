#include <iostream>
#include<math.h>
using namespace std;

typedef unsigned int ll;

int main()
{
    cout.tie(0);
    unsigned int n;
    cin >> n;
    while (n != 0)
    {
        unsigned int sqr = sqrt(n);
        if (sqr * sqr == n) {
            cout << "yes\n";            
        } else {
            cout << "no\n";
        }
        cin >> n;
    }
    return 0;
}