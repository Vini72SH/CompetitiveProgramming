#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1623

using namespace std;

int main() {
    long long n, a, b;
    long long diff = INT_MAX;

    cin >> n;

    vector<unsigned long long> x(n + 1);

    for (unsigned int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    for (long long i = 0; i < (1 << n); ++i) {
        a = 0;
        b = 0;
        for (long long j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                a += x[j];
            } else {
                b += x[j];
            }
        }
        diff = min(diff, llabs(a - b));
    }

    cout << diff << '\n';

    return 0;
}