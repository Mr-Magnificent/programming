#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int len = s.length();
        regex reg("[:space:]|[:punct:]|[:s:]");
        cout << regex_replace(s, reg, "") << endl;
        string result;

        // regex_replace( ) for replacing the match with 'geek'
        regex_replace(back_inserter(result), s.begin(), s.end(),
                      reg, "");

        cout << result;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome("A man, a plan, a canal: Panama");
}