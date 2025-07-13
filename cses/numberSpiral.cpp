#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1071

using namespace std;

int main() {
    long int t, x, y, value, max;

    cin >> t;
    while (t--) {
        cin >> y >> x;

        max = (y > x) ? y : x;
        if ((max % 2) == 1) {
            if (y == max) {
                value = (max - 1) * (max - 1) + x;
            } else {
                value = (max * max) - y + 1;
            }
        } else {
            if (x == max) {
                value = (max - 1) * (max - 1) + y;
            } else {
                value = (max * max) - x + 1;
            }
        }

        cout << value << '\n';
    }

    return 0;
}