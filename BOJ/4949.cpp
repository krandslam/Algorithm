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

    while (line[0] != '.') {
        bool no = false;
        stack <int> small;
        stack <int> big;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == '(') small.push(i);
            else if (line[i] == '[') big.push(i);
            else {
                if (line[i] == ')') {
                    if (!small.empty()) {
                        if (!big.empty()) { // (와 [ 공존
                            // ( 위치가 [ 위치보다 가까워야함
                            if (small.top() > big.top()) small.pop();
                            else {
                                no = true;
                                break;
                            }
                        }
                            // ( 만 존재
                        else small.pop();
                    }
                        // ( 없는데 ) 입력
                    else {
                        no = true;
                        break;
                    }
                }
                else if (line[i] == ']') {
                    if (!big.empty()) {
                        if (!small.empty()) { // (와 [ 공존
                            // [ 위치가 ( 위치보다 가까워야함
                            if (big.top() > small.top()) big.pop();
                            else {
                                no = true;
                                break;
                            }
                        }
                            // [ 만 존재
                        else big.pop();
                    }
                        // [ 없는데 ] 입력
                    else {
                        no = true;
                        break;
                    }
                }
            }
        }
        if (!small.empty() || !big.empty() || no) cout << "no" << '\n';
        else cout << "yes" << '\n';

        getline(cin,line);
    }

    return 0;
}