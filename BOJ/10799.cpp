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

    stack <int> s1;
    int cnt = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == '(') s1.push(i);
        else {
            if (s1.top() == i-1) {
                // 레이저
                s1.pop();
                cnt += s1.size();
            }
            else {
                // 쇠막대기 -> 쇠막대기 끝이라 1 증가
                s1.pop();
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
