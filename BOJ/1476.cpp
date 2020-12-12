#include <iostream>
using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int e, s, m;
    cin >> e >> s >> m;

    int E, S, M;
    E = S = M = 1;
    for (int i = 1; ; i++) {
        if (e == E && s == S && m == M) {
            cout << i;
            break;
        }
        E++;
        S++;
        M++;

        if (E == 16) E = 1;
        if (S == 29) S = 1;
        if (M == 20) M = 1;
    }

    return 0;
}