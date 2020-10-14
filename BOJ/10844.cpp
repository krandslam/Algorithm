#include <iostream>
using namespace std;

long long d[101][10];
const int mod = 1000000000;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 1; i <= 9; i++) {
        d[1][i] = 1;
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j-1 >= 0) d[i][j] += d[i-1][j-1];
            if (j+1 <= 9) d[i][j] += d[i-1][j+1];
            d[i][j] %= mod;
        }
    }
    long long sum = 0;
    for (int i = 0; i <= 9; i++) {
        sum += d[N][i];
    }
    cout << sum%mod;

    return 0;
}