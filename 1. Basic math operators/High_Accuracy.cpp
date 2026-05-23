#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a;
        cin >> a;

        int ans = 100; 

        for (int i = 0; i <= 100; i++) {
            int w = 3*i - a;

            if (w >= 0 && i + w <= 100) {
                ans = min(ans, w);
            }
        }

        cout << ans << endl;
    }

    return 0;
}