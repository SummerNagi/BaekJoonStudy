#include <iostream>
#include <vector>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> A(N + 1), S(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }

    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        cout << S[b] - S[a - 1] << "\n";
    }

    return 0;
}
