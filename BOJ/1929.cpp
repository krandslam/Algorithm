#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;

    cin >> M >> N;

    bool c[N+1] = {false};

    // 아리스토테네스의 체
    for (int i = 2; i <= N; i++) {
        if (c[i] == false) {
            if (i >= M) cout << i << '\n';
            for (int j = i+i; j <= N; j+=i) {
                c[j] = true;
            }
        }
    }

    return 0;
}