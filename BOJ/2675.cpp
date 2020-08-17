#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore(); // 엔터 공백 처리

    while (T--) {
        string line;
        getline(cin,line);

        // ASCII 0: 48 / 1: 49 ...
        int R = int(line[0]) - 48;

        int len = line.length();
        for (int i = 2; i < len; i++){
            // idx 2부터 문자 R번 반복
            for (int j = 0; j < R; j++) {
                cout << line[i];
            }
        }
        cout << '\n';
    }

    return 0;
}