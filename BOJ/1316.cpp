#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore(); // 엔터 공백 처리

    string line;
    int cnt = 0;
    while (N--) {
        getline(cin,line);
        bool check = true;
        for (int i = 1; i < line.length(); i++){
            // 연속하는 문자가 다른 경우
            if (line[i] != line[i-1]) {
                // 이전에 같은게 있는지
                for (int j = 0; j < i-1; j++) {
                    if (line[j] == line[i]) {
                        check = false;
                        break;
                    }
                }
            }
        }
        if (check) cnt++;
    }

    cout << cnt;
    return 0;
}