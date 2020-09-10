#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    // 아리스토테네스의 체
    bool check[1000001] = {false};
    for (int i = 2; i <= 1000000; i++) {
        if (check[i] == false) {
            for (int j = i*2; j <= 1000000; j+= i) {
                check[j] = true;
            }
        }
    }

    while (T--) {
        int N;
        cin >> N;
        int cnt = 0;
        for (int i = 3; i <= N/2; i+=2) {
            if (check[i] == false) {
                if (check[N-i] == false) {
                    cnt++;
                }
            }
        }
        // 예외처리
        if (N==4) cout << 1 << '\n';
        else cout << cnt << '\n';
    }

    return 0;
}