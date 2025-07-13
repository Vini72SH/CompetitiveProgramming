#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1069

using namespace std;

int main() {
    char c;
    string s;
    long int size, rep, maxRep;

    cin >> s;
    size = s.size();

    c = s[0];
    rep = maxRep = 1;
    for (long int i = 1; i < size; ++i) {
        if (s[i] == c) {
            rep++;
            if (rep > maxRep) {
                maxRep = rep;
            }
        } else {
            rep = 1;
            c = s[i];
        }
    }

    cout << maxRep << '\n';
}