#include <iostream>
#include <string>
using namespace std;

string N;
int ans = 0;

int main() {
    cin >> N;

    for (char c : N) {
        // cがcharなので、charの0を引いて文字通りのintに変換する
        ans = ans * 2 + (c - '0');
    }

    cout << ans << endl;

    return 0;
}
