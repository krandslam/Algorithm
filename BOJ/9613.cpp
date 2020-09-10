#include <iostream>

using namespace std;

int gcd (int a, int b);

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int num[n];

        // 숫자 배열에 저장
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }

        //오버플로우 방지
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                cnt += gcd(num[i],num[j]);
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}

// 재귀 방식
int gcd (int a, int b) {
    if (b == 0) return a;
    else return gcd(b,a%b);
}