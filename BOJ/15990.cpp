#include <iostream>
using namespace std;

long long d[100005][4];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            if (i-1 >= 0) {
                d[i][1] = d[i-1][2] + d[i-1][3];
                if (i == 1) {
                    d[i][1] = 1;
                }
            }
            if (i-2 >= 0) {
                d[i][2] = d[i-2][1] + d[i-2][3];
                if (i == 2) {
                    d[i][2] = 1;
                }
            }
            if (i-3 >= 0) {
                d[i][3] = d[i-3][1] + d[i-3][2];
                if (i == 3) {
                    d[i][3] = 1;
                }
            }
            d[i][1] %= 1000000009;
            d[i][2] %= 1000000009;
            d[i][3] %= 1000000009;
        }
        cout << (d[n][1] + d[n][2] + d[n][3]) % 1000000009 << '\n';
    }

    return 0;
}