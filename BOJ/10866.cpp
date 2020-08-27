#include <iostream>
#include <string>

using namespace std;

class deque {
private:
    int data[10000];
    int begin = 0;
    int end = 0;
public:
    void push_front(int X);
    void push_back(int X);
    void pop_front();
    void pop_back();
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

    deque d1;

    string line;
    while (N--) {
        getline(cin,line);
        if (line[0] == 'p') {
            if (line[5] == 'f') { // push_front
                string num = line.substr(11);
                int X = stoi(num);
                d1.push_front(X);
            }
            else if (line[5] == 'b') { // push_back
                string num = line.substr(10);
                int X = stoi(num);
                d1.push_back(X);
            }
            else if (line[4] == 'f') { // pop_front
                d1.pop_front();
            }
            else d1.pop_back();
        }
        else if (line[0] == 's') d1.size();
        else if (line[0] == 'e') {
            if (d1.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (line[0] == 'f') d1.front();
        else d1.back();
    }

    return 0;
}

void deque::push_front(int X) {
    if (empty()) {
        data[begin] = X;
        end++;
    }
    else {
        int tmp[10000];

        // 한칸 미룰려고 tmp 배열 만듬
        for (int i = begin; i < end; i++) {
            tmp[i] = data[i];
        }

        //맨 앞 X 넣고 한칸씩 미룸
        data[begin] = X;
        for (int i = begin; i < end; i++) {
            data[i+1] = tmp[i];
        }

        end++;
    }
}

void deque::push_back(int X) {
    if (empty()) {
        data[begin] = X;
        end++;
    }
    else {
        data[end] = X;
        end++;
    }
}

void deque::pop_front() {
    if (empty()) cout << -1 << '\n';
    else {
        cout << data[begin] << '\n';
        // 맨 끝 전까지 데이터 오른쪽으로 한 칸씩 이동
        for (int i = begin; i < end-1; i++) {
            data[i] = data[i+1];
        }
        // 맨 끝 데이터 삭제
        data[end-1] = 0;
        end--;
    }
}

void deque::pop_back() {
    if (empty()) cout << -1 << '\n';
    else {
        cout << data[end-1] << '\n';
        // 맨 끝 데이터 삭제
        data[end-1] = 0;
        end--;
    }
}

void deque::size() {
    cout << end - begin << '\n';
}

bool deque::empty() {
    if (begin == end) return true;
    else return false;
}

void deque::front() {
    if (empty()) cout << -1 << '\n';
    else cout << data[begin] << '\n';
}

void deque::back() {
    if (empty()) cout << -1 << '\n';
    else cout << data[end-1] << '\n';
}