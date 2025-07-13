#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1094

using namespace std;

int main() {
    long int n, moves, first, second, diff, offset;
    cin >> n;

    moves = 0;

    cin >> first;
    for (long int i = 1; i < n; ++i) {
        cin >> second;
        diff = second - first;
        offset = 0;
        if (diff < 0) {
            moves += (diff * (-1));
            offset = (diff * (-1));
        }
        first = second + offset;
    }
    cout << moves << '\n';

    return 0;
}