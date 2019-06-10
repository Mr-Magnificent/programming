#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    bool seen;
    TrieNode * next[26];

    TrieNode(bool val): seen(val), next() {}
};

int main(int argc, char const *argv[])
{
    TrieNode* root = new TrieNode(false);
    cout << "Create A trie:\nEnter number of Words:\n";
    int words;
    cin >> words;
    cin.ignore();
    while(words--)
    {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        TrieNode * temp = root;
        for (int i = 0; i < s.length(); i++) 
        {
            int index = s[i] - 'a';
            if(temp->next[index] == NULL) 
            {
                TrieNode * attach = (i == (s.length() - 1)) ? new TrieNode(true) : new TrieNode(false);
                temp->next[index] = attach;
            }
            temp = temp->next[index];
        }
    }
    cout << "Find Words:\n";
    cout << "Enter number of words to find\n";
    cin >> words;
    cin.ignore();
    while(words--)
    {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i;
        bool found = false;
        TrieNode * temp = root;
        for(i = 0; i < (s.length() - 1); i++)
        {
            int index = s[i] - 'a';
            if(temp->next[index] == NULL)
            {
                break;
            }
            temp = temp->next[index];
        }
        int index = s[s.length() - 1] - 'a';
        if (temp->next[index] != NULL && temp->next[index]->seen == true)
        {
            found = true;
        } 
        if (!found) {
            cout << "Element Not Found\n";
        }
        else
        {
            cout << "Element found\n";
        }
    }
    return 0;
}
