#include <iostream>
using namespace std;

int d[31];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    d[0] = 1;
    for (int i = 2; i <= n; i+=2) {
        d[i] = 3*d[i-2];
        if (i >= 4) {
            for (int j = 4; j <= i; j+=2) {
                d[i] += 2*d[i-j];
            }
        }
    }

    cout << d[n];

    return 0;
}