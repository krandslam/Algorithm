#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i <= N; i++) {
        if (i < N) {
            // 공백
            for (int j = 0; j < i; j++){
                cout << ' ';
            }
            // 별 출력
            int star_num = 2*N -1 -2*i;
            for (int k = 0; k < star_num; k++){
                cout << '*';
            }
            cout << '\n';
        }
        else {
            for (int second_star = 3; second_star <= 2*N-1; second_star += 2) {
                int total_empty = (2*N-1) - second_star;
                // 공백
                for (int j = 0; j < total_empty / 2; j++){
                    cout << ' ';
                }
                // 별 출력
                for (int k = 0; k < second_star; k++){
                    cout << '*';
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
