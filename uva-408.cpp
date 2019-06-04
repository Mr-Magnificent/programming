#include "header.h"
using namespace std;

int main(int argc, char const *argv[])
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    ull step, mod;
    while (cin >> step >> mod)
    {
        vector<bool> b(mod, false);
        b[0] = true;
        ull ans = 0;
        do
        {
            ans = (ans + step) % mod;
            b[ans] = true;
        } while (ans != 0);
        f0(int, b.size(), 1)
        {
            if(b[i] == 0) {
                cout << setw(10);
                cout << "bad\n";
                break;
            }
        }
    }
    return 0;
}
