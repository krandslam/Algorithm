#include <iostream>

using namespace std;

int gcd (int a, int b);

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, S;
    cin >> N >> S;

    int D[N];

    // 동생들과의 거리 구하기
    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;

        // 양수로만 저장
        if (d > S) {
            D[i] = d-S;
        }
        else D[i] = S-d;
    }

    // 거리들의 GCD 구하기 -> 한번에 D만큼 이동하는 최대값
    int rslt = 0;
    for (int i = 0; i < N-1; i++) {
        if (i == 0) rslt = gcd(D[i],D[i+1]);
        else rslt = gcd(rslt,D[i+1]);
    }

    if (N == 1) cout << D[0];
    else cout << rslt;

    return 0;
}

// 재귀 방식
int gcd (int a, int b) {
    if (b == 0) return a;
    else return gcd(b,a%b);
}