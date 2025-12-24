#include <iostream>
#include <vector>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    cin >> N;
    constexpr long long MAX_NUM = numeric_limits<long long>::max();
    vector<vector<vector<long long>>> dp(N, vector<vector<long long>>(3, vector<long long>(3, MAX_NUM - 10'000)));

    long long v1, v2, v3;
    cin >> v1 >> v2 >> v3;

    dp[0][0][0] = v1;
    dp[0][1][1] = v2;
    dp[0][2][2] = v3;

    for (int i = 1; i < N; ++i)
    {
        cin >> v1 >> v2 >> v3;
        dp[i][0][0] = v1 + min(dp[i - 1][1][0], dp[i - 1][2][0]);
        dp[i][0][1] = v1 + min(dp[i - 1][1][1], dp[i - 1][2][1]);
        dp[i][0][2] = v1 + min(dp[i - 1][1][2], dp[i - 1][2][2]);

        dp[i][1][0] = v2 + min(dp[i - 1][0][0], dp[i - 1][2][0]);
        dp[i][1][1] = v2 + min(dp[i - 1][0][1], dp[i - 1][2][1]);
        dp[i][1][2] = v2 + min(dp[i - 1][0][2], dp[i - 1][2][2]);

        dp[i][2][0] = v3 + min(dp[i - 1][1][0], dp[i - 1][0][0]);
        dp[i][2][1] = v3 + min(dp[i - 1][1][1], dp[i - 1][0][1]);
        dp[i][2][2] = v3 + min(dp[i - 1][1][2], dp[i - 1][0][2]);
    }

    long long answer = MAX_NUM;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (i == j)
            {
                continue;
            }
            answer = min(answer, dp[N - 1][i][j]);
        }
    }
    
    cout << answer << '\n';

    return (0);
}
