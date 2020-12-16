#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long len = 0; // 총 자리수
    int cnt = 1; // 각각 자리 수 (1,2,3, ...) / 1자리: 1-9, 2자리: 11-99
    for (int i = 1; i <= 100000000; i*=10) {
        int end = i*10 -1;
        if (end > n) { // n 예외 처리
            len += cnt * (n - i + 1);
            break;
        }
        len += cnt * (end - i + 1);

        cnt++;
    }

    cout << len;

    return 0;
}