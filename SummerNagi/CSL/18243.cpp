#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N = 0;
    int K = 0;
    
    cin >> N >> K;

    constexpr int INF = 1e9;

    vector<vector<int>> board(N, vector<int>(N, INF));

    for (int i = 0; i < K; ++i)
    {
        int s, e;
        cin >> s >> e;
        board[s - 1][e - 1] = 1;
        board[e - 1][s - 1] = 1;
    }

    for (int slf = 0; slf < N; ++slf)
    {
        board[slf][slf] = 0;
    }

    for (int cross = 0; cross < N; ++cross)
    {
        for (int start = 0; start < N; ++start)
        {
            if (cross == start)
            {
                continue;
            }
            for (int end = 0; end < N; ++end)
            {
                if (cross == end || start == end)
                {
                    continue;
                }
                if (board[start][end] > board[start][cross] + board[cross][end])
                {
                    board[start][end] = board[start][cross] + board[cross][end];
                }
            }
        }
    }

    for (int start = 0; start < N; ++start)
    {
        for (int end = 0; end < N; ++end)
        {
            if (board[start][end] >= 7)
            {
                cout << "Big World!" << '\n';
                return (0);
            }
        }
    }

    cout << "Small World!" << '\n';
    return (0);
}
