#include <iostream>
using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int d[n+1];
    d[0] = 1;
    d[1] = 1;
    for (int i = 2; i <= n; i++) {
        d[i] = (d[i-1] + d[i-2])%10007;
    }
    cout << d[n];
    return 0;
}