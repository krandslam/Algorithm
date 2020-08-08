#include <iostream>

using namespace std;

int main() {

    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    // 이중반복문
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            if (j > N-i) cout << '*'; //1번째 줄: 별이 5번째에 한번이니까 j > 5-1
                // 2번째 줄: 별이 4,5번째 j > 5-2 ...
            else cout << ' ';
        }
        // 별 다 출력하면 줄바꿈
        cout << '\n';
    }

    return 0;
}