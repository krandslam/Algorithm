#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;

    cin >> T;

    for (int i = 0; i < T; i++){
        int A, B;
        cin >> A >> B;
        cout << A+B << '\n';
    }

    return 0;
}