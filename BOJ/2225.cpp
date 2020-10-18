#include <iostream>
using namespace std;
long long d[201][201];
const int mod = 1000000000;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i <= n; i++) {
        d[1][i] = 1;
    }

    for (int i = 2; i <= k; i++) {
        for (int j = 0; j <= n; j++) {
            for (int l = 0; l <= j; l++) {
                d[i][j] += d[i-1][j-l];
                d[i][j] %= mod;
            }
        }
    }

    cout << d[k][n];

    return 0;
}