#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack <char> left;
    stack <char> right;
    string line;
    getline(cin,line);

    for (int i = 0; i < line.length(); i++){
        left.push(line[i]);
    }

    int M;
    cin >> M;
    cin.ignore();

    while (M--) {
        getline(cin,line);
        if (line[0] == 'L') {
            if (!left.empty()) {
                char tmp = left.top();
                left.pop();
                right.push(tmp);
            }
        }
        else if (line[0] == 'D') {
            if (!right.empty()) {
                char tmp = right.top();
                right.pop();
                left.push(tmp);
            }
        }
        else if (line[0] == 'B') {
            if (!left.empty()) {
                left.pop();
            }
        }
        else { // P $
            left.push(line[2]);
        }
    }

    // 출력위해서 역으로
    stack <char> reverse;
    while (!left.empty()) {
        reverse.push(left.top());
        left.pop();
    }

    while (!reverse.empty()) {
        cout << reverse.top();
        reverse.pop();
    }

    while (!right.empty()) {
        cout << right.top();
        right.pop();
    }

    return 0;
}