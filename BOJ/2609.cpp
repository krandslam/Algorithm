#include <iostream>

using namespace std;

int GCD(int a, int b);

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    // 최대공약수 구함
    int G = GCD(A,B);

    // 최소공배수 공식
    int L = A*B/G;

    cout << G << '\n' << L << '\n';

    return 0;
}

int GCD(int a, int b) {
    if (b == 0) return a;
    else return GCD(b,a%b);
}
