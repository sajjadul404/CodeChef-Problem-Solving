#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 1;
    while (i <= N) {
        cout << i * i;
        if (i != N)
            cout << " ";
        i++;
    }

    return 0;
}