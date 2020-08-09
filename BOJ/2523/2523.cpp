#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,C;

    cin >> A >> B >> C;

    // 같은수 3개
    if (A == B == C) {
        cout << A;
    }
    // 같은수 2개
    else if (A == B || B == C) {
        cout << B;
    }
    // 같은수 2개
    else if (C == A) {
        cout << C;
    }
    // 같은수 0개
    else {
        int N[3] = {A,B,C};

        int Max = N[0];
        for (int i = 1; i < 3; i++){
            if (N[i] > Max) Max = N[i];
        }

        int Min = N[0];
        for (int i = 1; i < 3; i++){
            if (N[i] < Min) Min = N[i];
        }

        // Max & Min 아닌 값 출력
        for (int i = 0; i < 3; i++){
            if (N[i] != Max && N[i] != Min) {
                cout << N[i];
            }
        }
    }

    return 0;
}
