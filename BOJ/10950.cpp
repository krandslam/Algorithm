#include <iostream>

using namespace std;

int main() {

    int A, B, T;
    cin >> T;
    // T번째까지 입력받고 더함
    for (int i = 0; i < T; i++){
        cin >> A >> B;
        cout << A+B << endl;
    }

    return 0;
}