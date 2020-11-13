#include <iostream>
using namespace std;
int a[10001];
int d[10001];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    d[1] = a[1];
    if (n >= 2) d[2] = a[1] + a[2];

    for (int i = 3; i <= n; i++) {
        d[i] = d[i-1];
        if (d[i-2] + a[i] > d[i]) {
            d[i] = d[i-2] + a[i];
        }
        if (d[i-3] + a[i] + a[i-1] > d[i]) {
            d[i] = d[i-3] + a[i] + a[i-1];
        }
    }

    cout << d[n];

    return 0;
}