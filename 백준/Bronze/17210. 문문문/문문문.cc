#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 6) {
        cout << "Love is open door";
        return 0;
    }

    int first;
    cin >> first;

    for (int i = 1; i < n; ++i) {
        first = 1 - first;  // 0 → 1, 1 → 0 번갈아
        cout << first << '\n';
    }
}
