#include <iostream>
using namespace std;
int d[1001];
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
            if (a[j] > a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
            }
        }
    }

    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (max < d[i]) max = d[i];
    }

    cout << max;
    return 0;
}