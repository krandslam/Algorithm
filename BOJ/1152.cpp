#include <iostream>
#include <string>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin,line);

    int cnt = 0;
    // len-1 까지 해서 뒷공백 처리
    // 어차피 마지막에 글자오나 공백오나 글자 수 상관 없으니까
    for (int i = 0; i < line.length()-1; i++) {
        // 맨 앞 공백 처리
        if (i == 0 && line[0] == ' ') continue;

        if (line[i] == ' ') cnt++;
    }

    // 공백만 들어오면 0 출력
    if (line[0] == ' ' && line.length() == 1) cout << cnt;
        // 마지막 단어 포함 / +1
    else cout << cnt+1;

    return 0;
}