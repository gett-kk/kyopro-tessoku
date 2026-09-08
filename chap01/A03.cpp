#include <iostream>
using namespace std;

int N, K, P[100], Q[100];
bool contains = false;

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < K; i++) cin >> Q[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (P[i] + Q[j] == K) {
                contains = true;
                break;
            }
        }
    }

    if (contains) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
