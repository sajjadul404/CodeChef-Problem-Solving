#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int subscriptions = (N + 5) / 6;
        cout << subscriptions * X << "\n";
    }

    return 0;
}