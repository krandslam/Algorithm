#include <iostream>

using namespace std;
int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n  = 1;
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++) {
        n *= i;
    }
    cout << n;
    return 0;
}