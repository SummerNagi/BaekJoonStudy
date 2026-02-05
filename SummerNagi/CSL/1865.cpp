#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    int s = 0;
    int e = 0;
    long long w = 0;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 0;
    cin >> TC;

    while (TC--)
    {
        int N, M, W;
        cin >> N >> M >> W;

        constexpr long long INF = (1LL << 60);

        vector<long long> dist(N + 1, INF);
        vector<vector<long long>> board(N + 1, vector<long long>(N + 1, INF));
        vector<Edge> edges;
        edges.reserve(M * 2);
        for (int i = 0; i < M; ++i)
        {
            int S, E;
            long long T;
            cin >> S >> E >> T;
            if (board[S][E] > T)
            {
                board[S][E] = T;
                board[E][S] = T;
            }
        }
        for (int i = 0; i < W; ++i)
        {
            int S, E;
            long long T;
            cin >> S >> E >> T;
            board[S][E] = min(board[S][E], -(T));
        }

        for (int i = 0; i <= N; ++i)
        {
            for (int j = 1; j <= N; ++j)
            {
                if (i == 0)
                {
                    edges.push_back({ i, j, 0 });
                }
                else
                {
                    if (board[i][j] != INF)
                    {
                        edges.push_back({ i, j, board[i][j] });
                    }
                }
            }
        }

        dist[0] = 0;

        for (int i = 1; i < N; ++i)
        {
            bool updated = false;
            for (const Edge& e : edges)
            {
                if (dist[e.s] >= INF)
                {
                    continue;
                }
                long long nd = dist[e.s] + e.w;
                if (dist[e.e] > nd)
                {
                    dist[e.e] = nd;
                    updated = true;
                }
            }

            if (updated == false)
            {
                break;
            }
        }

        bool bLoop = false;
        for (const Edge& e : edges)
        {
            if (dist[e.s] >= INF)
            {
                continue;
            }
            if (dist[e.e] > dist[e.s] + e.w)
            {
                bLoop = true;
                break;
            }
        }

        if (bLoop)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return (0);
}
