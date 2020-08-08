#include <iostream>

using namespace std;

int main() {
    int A, B;

    cin >> A >> B; // 1 & 2

    cout << A * (B - (B/10) * 10) << endl; // 3
    cout << A * ((B/10) - (B/100)*10) << endl ; // 4
    cout << A * (B/100) << endl; // 5

    cout << A * B << endl; // 6

    return 0;
}