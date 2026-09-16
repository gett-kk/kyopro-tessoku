#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;

    for (int x = 9; x >= 0; x--) {
        int digit = (N / (1 << x)) % 2;
        cout << digit;
    }

    cout << endl;
    return 0;
}
