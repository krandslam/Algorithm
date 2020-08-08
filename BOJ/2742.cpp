#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    for ( ; N > 0; N--){
        cout << N << '\n';
    }

    return 0;
}