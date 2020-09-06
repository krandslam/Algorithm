#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int cnt = 0;
    while (N--) {
        int M;
        cin >> M;
        bool is_prime = true;
        // 소수찾기
        // 인수 있으면 한 수는 sqrt(M) 보다 크거나 작고 한 수는 sqrt(M) 보다 작거나 같으니까
        // sqrt(M)까지 체크
        // i <= sqrt(M) -> i * i <= M
        for (int i = 2; i * i <= M; i++) {
            if (M % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime && M > 1) cnt++;
    }

    cout << cnt;

    return 0;
}