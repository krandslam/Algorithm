#include <iostream>
using namespace std;

int d[1001];

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int p[N+1];

    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }

    // d[0] = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            d[i] = max(d[i],d[i-j]+p[j]);
        }
    }
    cout << d[N];

    return 0;
}