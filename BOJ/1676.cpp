#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int cnt = 0;
    // 5의 배수로 나눠지는 개수가 0의 개수
    for (int i = 5; i <= N; i *=5) {
        cnt += N/i;
    }

    cout << cnt;

    return 0;
}