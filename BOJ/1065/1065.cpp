#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (N < 100) {
        cout << N;
    }
    else {
        int cnt = 0;
        for (int i = 100; i <= N; i++){
            int hun = i/100;
            int ten = i/10 - i/100*10;
            int one = i - i/10*10;

            if (hun-ten == ten-one) cnt++;
        }
        cout << 99+cnt; // 99: 두 자리 수의 한수 개수
    }

    return 0;
}
