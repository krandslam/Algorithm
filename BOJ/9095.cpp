#include <iostream>
using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    int d[11] = {0};
    while (T--) {
        int n;
        cin >> n;
        d[0] = 1;
        d[1] = 1;
        d[2] = 2;
        for (int i = 3; i <= n; i++) {
            d[i] = d[i-1] + d[i-2] + d[i-3];
        }
        cout << d[n] << '\n';
    }
    return 0;
}