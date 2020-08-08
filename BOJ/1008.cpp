#include <iostream>

using namespace std;

int main() {

    double A, B, rslt; // 소수점 나타내려면 double 자료형

    cout.precision(15); // 소수점 15번째까지
    cin >> A >> B;
    rslt = A / B;
    cout << rslt << endl;

    return 0;
}