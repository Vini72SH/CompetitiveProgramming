#include <bits/stdc++.h>

// https://cses.fi/problemset/task/2205

using namespace std;

vector<string> get(unsigned int n) {
    vector<string> current;
    if (n == 1) {
        current.push_back("0");
        current.push_back("1");
        return current;
    }

    vector<string> previous = get(n - 1);
    for (int i = 0; i < (int)previous.size(); ++i) {
        string s;
        s += '0';
        s += previous[i];
        current.push_back(s);
    }

    for (int i = (int)previous.size() - 1; i >= 0; --i) {
        string s;
        s += '1';
        s += previous[i];
        current.push_back(s);
    }

    return current;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned int n;
    vector<string> s;

    cin >> n;

    s = get(n);

    for (string bitString : s) {
        cout << bitString << '\n';
    }

    return 0;
}