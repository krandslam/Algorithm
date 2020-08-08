#include <iostream>

using namespace std;

int main() {

    int A, B;
    int T;

    cin >> T;
    // 입력 T까지
    for (int i = 0; i < T; i++){
        cin >> A >> B;
        cout << "Case #" << i+1 << ": " << A << " + " << B << " = "<< A+B << endl;
    }

    return 0;
}