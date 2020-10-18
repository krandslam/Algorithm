#include <iostream>
using namespace std;

int A[1001];
int d[1001];
int v[1001];

void go (int p);

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        d[i] = 1;
    }

    v[1] = 0;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (A[j] < A[i] && d[i] < d[j]+1) {
                d[i] = d[j] + 1;
                v[i] = j;
            }
        }
    }

    int max = 0;
    int max_idx = 0;
    for (int i = 1; i <= n; i++) {
        if (d[i] > max) {
            max = d[i];
            max_idx = i;
        }
    }

    cout << max << '\n';
    go(max_idx);

    return 0;
}

// 재귀로 LIS 앞에서부터 출력
void go (int p) {
    if (p == 0) return;

    go(v[p]);
    cout << A[p] << ' ';
}