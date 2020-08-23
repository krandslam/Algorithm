#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    string line;

    while (N--) {
        getline(cin,line);
        stack <int> s1;
        bool no = false;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == '(') s1.push(i);
            else { // ) 들어옴
                if (!s1.empty()) s1.pop();
                else { // ( 없는데 ) 들어옴 -> 오류
                    no = true;
                    break;
                }
            }
        }
        // 다 끝나면 stack empty 해야 짝 맞음
        if (no || !s1.empty()) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}