#include <iostream>
using namespace std;

long long d[91][2];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    d[1][0] = 0;
    d[1][1] = 1;

    for (int i = 2; i <= n; i++) {
        d[i][0] = d[i-1][0] + d[i-1][1];
        d[i][1] = d[i-1][0];
    }

    cout << d[n][0] + d[n][1];

    return 0;
}