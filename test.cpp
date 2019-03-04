#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long int n, x = 1, tot = 0, temp = 9;
    cin >> n;
    int dig = 1;
    // x = n / 10;
    while(x < n) {
        x *= 10;
        dig++;
    }
    x /= 10;
    dig--;
    tot += (n - x + 1)*dig;
    x = 1;
    
    n /= 10;
    dig = 1;
    while(x <= n) {
        x = x * 10;
        tot += dig * temp;
        dig++;
        temp*=10;
    }
    
    cout << tot;
    return 0;
}
