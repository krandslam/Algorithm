#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin,line);

    int alphabet[26] = {0};

    // (ASCII) a: 97 / b: 98 ...
    for (int i = 0; i < line.length(); i++) {
        int alphabet_idx = int(line[i])-97; // a: 0번 / b: 1번 ...
        // 처음 저장 체크
        if (alphabet[alphabet_idx] == 0) {
            // alphabet 배열값들 모두 0으로 초기화 되어있으니까 1 이상 값으로 idx 저장
            alphabet[alphabet_idx] = i + 1;
        }
    }

    for (int i : alphabet){
        if (i == 0) cout << -1 << " ";
        else cout << i - 1 << " ";
    }

    return 0;
}