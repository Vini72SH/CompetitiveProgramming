#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1622

using namespace std;

unsigned int alpha[27];

unsigned int fat(unsigned int n) {
    unsigned int s = 1;

    for (unsigned int i = 1; i <= n; ++i) {
        s = s * i;
    }

    return s;
}

int main() {
    string s;
    unsigned long long strings;

    cin >> s;

    strings = fat((unsigned int)s.size());
    for (unsigned int i = 0; i < (unsigned int)s.size(); ++i) {
        alpha[s[i] % 26]++;
    }

    for (unsigned int i = 0; i < 26; ++i) {
        if (alpha[i]) strings /= fat(alpha[i]);
    }

    cout << strings << '\n';
    sort(s.begin(), s.end());
    do {
        cout << s << '\n';
    } while (next_permutation(s.begin(), s.end()));
}