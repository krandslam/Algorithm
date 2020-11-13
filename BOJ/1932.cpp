#include <iostream>
using namespace std;
int d[501][501];
int a[501][501];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            d[i][j] = max(d[i-1][j],d[i-1][j-1]) + a[i][j];
        }
    }

    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (max < d[n][i]) max = d[n][i];
    }

    cout << max;
    return 0;
}