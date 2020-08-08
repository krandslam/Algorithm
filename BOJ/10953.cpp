#include <iostream>

using namespace std;

int main() {

    int A, B;
    int T;
    string s;

    getline(cin,s); // 개행문자 처리때문에 getline 사용
    T = stoi(s); // string to int

    // 입력 T까지 & A,B 형식으로 입력들어옴
    for (int i = 0; i < T; i++){
        getline(cin,s);
        // cout << s << endl;
        string n1, n2;
        n1 = s[0];
        n2 = s[2];
        A = stoi(n1);
        B = stoi(n2);

        cout << A+B << endl;
    }

    return 0;
}