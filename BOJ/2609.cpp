#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B,a,b;
    cin >> A >> B;
    a = A;
    b = B;

    // 최대공약수 구함
    for (int i = 1; i < min(A,B); i++) {
        if (B == 0) break;

        int r = A%B;
        A = B;
        B = r;
    }

    int G;
    if (B == 0) G = A;
        // 서로소
    else G = 1;

    // 최소공배수 공식
    int L = a*b/G;

    cout << G << '\n' << L << '\n';

    return 0;
}