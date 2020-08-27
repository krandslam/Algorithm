#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin,line);
    line += ' '; // 공백오면 출력하니까 (마지막 단어 처리)

    stack <char> s1;
    bool bracket = false;
    for (int i = 0; i < line.length(); i++) {
        // <> 인지 bracket 변수로 체크
        if (line[i] == '<') bracket = true;

        if (bracket) {
            if (!s1.empty()) { // 공백없이 바로 < 만난 경우
                // ex) <open>gat<close> / gat 다음 바로 <
                while (!s1.empty()) {
                    cout << s1.top();
                    s1.pop();
                }
            }
            // bracket이니까 그냥 출력
            cout << line[i];
            // bracket 끝난거 check
            if (line[i] == '>') bracket = false;
        }
        else { // bracket 아니니까
            // 뒤집을 문자 stack에 저장
            if (line[i] == ' ') {
                while (!s1.empty()) {
                    cout << s1.top();
                    s1.pop();
                }
                cout << " ";
            }
            else s1.push(line[i]);
        }
    }

    return 0;
}
