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

    for (int i = 0; i < line.length(); i++) {
        char tmp = line[i];
        int ascii = int(tmp);

        // 아스키 A~Z
        if (ascii >= 65 && ascii <= 90) {
            alphabet[ascii-65] += 1;
        }
            // 아스키 a~z
        else if (ascii >= 97 && ascii <= 122) {
            alphabet[ascii-97] += 1;
        }
    }

    int max = 0;
    int max_idx = 0;
    // max 찾기
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            max_idx = i;
        }
    }

    // max가 중복되는지 & 자기 자신 제외
    bool question = false;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == max && i != max_idx) {
            question = true;
            break;
        }
    }

    if (question) cout << "?";
    else {
        // 대문자 출력
        cout << char (max_idx + 65);
    }
    return 0;
}