// https://www.geeksforgeeks.org/minimum-xor-value-pair/
// Solved using TRIE

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int seen;
    Node * zero;
    Node * one;

    Node(int val): seen(val), zero(), one() {}
};

int smallestNumLeft(Node * temp) {
    if (temp->one == NULL && temp->zero == NULL) return temp->seen;
    if (temp->zero != NULL) {
        return smallestNumLeft(temp->zero);
    } else {
        return smallestNumLeft(temp->one);
    }
}


int addElementToTrie(Node * root, int element) {
    bitset<32> bSet(element);
    string s = bSet.to_string();
    reverse(s.begin(), s.end());
    Node* temp = root;
    int diff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < 32; i++) {
        int t = INT32_MAX;
        if (bSet[31 - i] == 0 && temp->zero != NULL) {
            temp = temp->zero;
        } else if (bSet[31 - i] == 1 && temp->one != NULL) {
            temp = temp->one;
        } else if (bSet[31 - i] == 0 && temp->zero == NULL && temp->one != NULL) {
            t = smallestNumLeft(temp->one);
            diff = abs(t - element);
            pos = i;
            break;
        } else if (bSet[31 - i] == 1 && temp->one == NULL && temp->zero != NULL) {
            t = smallestNumLeft(temp->zero);
            diff = abs(t - element);
            pos = i;
            break;
        } else {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        for (int i = pos; i < 32; i++) {
            if (bSet[31 - i] == 0) {
                temp->zero = new Node(false);
                temp  = temp->zero;
            } else {
                temp->one = new Node(false);
                temp = temp->one;
            }
        }
        temp->seen = element;
    }

    return diff;
}

int main(int argc, char const *argv[])
{
    int arr[] = {4, 6, 8};
    Node* root = new Node(false);
    int min = INT_MAX;
    for(int x: arr) {
        int temp = addElementToTrie(root, x);
        if (temp < min) min = temp;
    }
    cout << min << "\n";
    return 0;
}
