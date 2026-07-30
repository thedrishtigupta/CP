#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N, 0));

    int r = 0, c = N / 2;
    A[r][c] = 1;

    for (int k = 2; k <= N * N; k++) {

        int nr = (r - 1 + N) % N;
        int nc = (c + 1) % N;

        if (A[nr][nc] == 0) {
            r = nr;
            c = nc;
        } else r = (r + 1) % N;

        A[r][c] = k;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j];
            if (j + 1 < N) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}