#include <iostream>
using namespace std;
int a[100001][2];
long long d[100001][3];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i][0];
        }
        for (int i = 1; i <= n; i++) {
            cin >> a[i][1];
        }

        for (int i = 1; i <= n; i++) {
            d[i][0] = max(d[i-1][0],max(d[i-1][1],d[i-1][2]));
            d[i][1] = max(d[i-1][0],d[i-1][2]) + a[i][0];
            d[i][2] = max(d[i-1][0],d[i-1][1]) + a[i][1];
        }
        cout << max(d[n][0],max(d[n][1],d[n][2])) << '\n';
    }

    return 0;
}