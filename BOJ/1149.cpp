#include <iostream>
using namespace std;
int d[1001][3];
int A[1001][3];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    for (int i = 1; i <= n; i++) {
        d[i][0] = min(d[i-1][1],d[i-1][2]) + A[i][0];
        d[i][1] = min(d[i-1][0],d[i-1][2]) + A[i][1];
        d[i][2] = min(d[i-1][0],d[i-1][1]) + A[i][2];
    }

    int tmp = min(d[n][0],d[n][1]);
    cout << min(tmp,d[n][2]);

    return 0;
}