#include <iostream>
using namespace std;

int main() {
    string name1, name2;
    int p1, p2;

    // Input
    cin >> name1 >> name2;
    cin >> p1 >> p2;

    // Compare percentages
    if (p1 > p2) {
        cout << name1;
    }
    else if (p2 > p1) {
        cout << name2;
    }
    else {
        cout << "equal";
    }

    return 0;
}