#include <iostream>
#include <vector>
using namespace std;
const int mod = 1000000009;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> d(1000001);
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    int t;
    cin >> t;
    int mem = 4;
    while (t--) {
        int n;
        cin >> n;
        if (mem == 4 || mem < n) {
            for (int i = mem; i <= n; i++) {
                d[i] = d[i-1] + d[i-2] + d[i-3];
                d[i] %= mod;
            }
            mem = n;
        }
        cout << d[n] << '\n';
    }

    return 0;
}