#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    // 0 개수 : 10의 개수 -> 2와 5 개수 최소 값
    // 분자 2와 5 개수 - 분모 2와 5개수 -> 최소 값 -> 정답
    long long cnt_2_n = 0;
    for (long long i = 2; i <= n; i*=2) {
        cnt_2_n += n/i;
    }

    long long cnt_5_n = 0;
    for (long long i = 5; i <= n; i*=5) {
        cnt_5_n += n/i;
    }

    long long cnt_2_m = 0;
    for (long long i = 2; i <= m; i*=2) {
        cnt_2_m += m/i;
    }

    long long cnt_5_m = 0;
    for (long long i = 5; i <= m; i*=5) {
        cnt_5_m += m/i;
    }

    long long cnt_2_n_m = 0;
    for (long long i = 2; i <= n-m; i*=2) {
        cnt_2_n_m += (n-m)/i;
    }

    long long cnt_5_n_m = 0;
    for (long long i = 5; i <= n-m; i*=5) {
        cnt_5_n_m += (n-m)/i;
    }

    long long two = cnt_2_n - cnt_2_m - cnt_2_n_m;
    long long five = cnt_5_n - cnt_5_m - cnt_5_n_m;

    cout << min(two,five);

    return 0;
}