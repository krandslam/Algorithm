#include <iostream>
#include <string>

using namespace std;

class stack {
private:
    int data[10000];
    int size = 0;
public:
    void push (int X);
    void pop();
    void Size();
    bool empty();
    void top();
};

int main() {
    // 출력 속도 상승
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cin.ignore();

    string line;
    stack s1;
    while (N--) {
        getline(cin,line);
        if (line[0] == 's') s1.Size();
        else if (line[0] == 'e') {
            if (s1.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (line[0] == 't') {
            s1.top();
        }
        else { // push or pop
            if (line[1] == 'u') {
                string num = line.substr(5);
                int X = stoi(num);
                s1.push(X);
            }
            else {
                s1.pop();
            }
        }
    }
    return 0;
}

bool stack::empty() {
    if (size == 0) return true;
    else return false;
}
void stack::push(int X) {
    data[size] = X;
    size++;
}

void stack::pop() {
    if (empty()) cout << -1 << '\n';
    else {
        int top = data[size-1];
        data[size-1] = 0;
        cout << top << '\n';
        size--;
    }
}

void stack::top() {
    if (empty()) cout << -1 << '\n';
    else cout << data[size-1] << '\n';
}

void stack::Size() {
    cout << size << '\n';
}