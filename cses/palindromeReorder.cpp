#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1755

using namespace std;

int frequency[27];

int main() {
    int n, j, k;
    string s;
    char c;
    bool odd1 = false;
    bool odd2 = false;

    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i) {
        c = s[i];
        frequency[(c - 'A')]++;
    }

    for (int i = 0; i < 27; ++i) {
        if ((frequency[i] & 0b1)) {
            if (!(odd1)) {
                odd1 = true;
                continue;
            }
            if (!(odd2)) {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
    }

    vector<char> string(n);
    j = 0;
    for (int i = 0; i < 27; ++i) {
        while (frequency[i] > 0) {
            k = n - (j + 1);
            if (frequency[i] & 0b1) {
                string[(n / 2)] = char(i + 'A');
                frequency[i]--;
            } else {
                string[j] = char(i + 'A');
                string[k] = char(i + 'A');
                frequency[i] -= 2;
                j++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << string[i];
    }

    cout << "\n";
}