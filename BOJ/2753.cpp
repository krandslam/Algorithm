#include <iostream>

using namespace std;

int main() {

    int year;
    bool check = false;

    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0){
            cout << 1 << endl;
            check = true;
        }
    }

    if (!check) cout << 0 << endl;

    return 0;
}