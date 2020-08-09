#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;

    cin >> N >> X;

    int n;

    for (int i = 0; i < N; i++){
        cin >> n;
        if (n < X) cout << n << " ";
    }

    return 0;
}