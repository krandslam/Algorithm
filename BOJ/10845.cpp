#include <iostream>
#include <string>

using namespace std;

class queue {
private:
    int data[10000];
    int begin = 0;
    int end = 0;
public:
    void push(int X);
    void pop();
    void size();
    bool empty();
    void front();
    void back();
};

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    queue q1;
    while (N--) {
        string line;
        getline(cin,line);

        if (line[0] == 'p') {
            if (line[1] == 'u') {
                string num = line.substr(5);
                int X = stoi(num);
                q1.push(X);
            }
            else {
                q1.pop();
            }
        }
        else if (line[0] == 's') {
            q1.size();
        }
        else if (line[0] == 'e') {
            if (q1.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (line[0] == 'f') {
            q1.front();
        }
        else q1.back();
    }
    return 0;
}

void queue::push(int X) {
    data[end] = X;
    end++;
}

void queue::pop() {
    if (empty()) cout << -1 << '\n';
    else {
        cout << data[begin] << '\n';
        data[begin] = 0;
        begin++;
    }
}

void queue::size() {
    cout << end - begin << '\n';
}

bool queue::empty() {
    if (begin == end) return true;
    else return false;
}

void queue::front() {
    if (empty()) cout << -1 << '\n';
    else cout << data[begin] << '\n';
}

void queue::back() {
    if (empty()) cout << -1 << '\n';
    else cout << data[end-1] << '\n';
}