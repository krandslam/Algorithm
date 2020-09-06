#include <iostream>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 소수찾기 - 에라토스테네스의 체
    bool check[1000001] = {false};
    for (int i = 2; i <= 1000000; i++) {
        if (check[i] == false) {
            for (int j = i+i; j <= 1000000; j +=i) {
                check[j] = true;
            }
        }
    }

    int n;
    bool assumption = false;
    int A, B;
    while (true) {
        cin >> n;
        if (n == 0) break;
        for (int a = 3; a <= n; a+=2) {
            if(!check[a]) {
                if (!check[n-a]) {
                    assumption = true;
                    A = a;
                    B = n-a;
                    break;
                }
            }
        }

        if (assumption) {
            cout << n << " = " << A << " + " << B << '\n';
        }
        else {
            cout << "Goldbach's conjecture is wrong." << '\n';
        }
    }

    return 0;
}