#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1754

using namespace std;

int main() {
    long long int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if ((a + b) % 3 == 0) {
            if ((a <= (2 * b)) && (b <= (2 * a))) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
}