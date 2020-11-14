#include <iostream>
using namespace std;
int d[1001];
int d2[1001];
int a[1001];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        d[i] = 1;
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
            }
        }
    }

    for (int i = n; i >= 1; i--) {
        d2[i] = 1;
        for (int j = i+1; j <= n; j++) {
            if (a[j] < a[i] && d2[i] < d2[j] + 1) {
                d2[i] = d2[j] + 1;
            }
        }
    }

    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (max < d[i]+d2[i]-1) max = d[i]+d2[i]-1;
    }

    cout << max;
    return 0;
}