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
    stack<char> st;
    while (N--) {
        getline(cin,line);
        line[line.length()] = ' ';
        for (int i = 0; i < line.length()+1; i++) {
            if (line[i] != ' ') st.push(line[i]);
            else {
                // 공백만나면 스택에 저장한 문자 출력 (스택 -> 뒤집어서 나옴)
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}