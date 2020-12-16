#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, m, n, x, y;
    cin >> t;

    while (t--) {
        cin >> m >> n >> x >> y;

        x--;
        y--;

        bool valid = false;
        for (int k = x; k < m*n; k+= m) {
            if (k % n == y) {
                valid = true;
                cout << k+1 << '\n';
                break;
            }
        }
        if (!valid) cout << -1 << '\n';
    }

    return 0;
}