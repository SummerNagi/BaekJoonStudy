#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    constexpr int di[] = { 0, 0, 1, -1 };
    constexpr int dj[] = { 1, -1, 0, 0 };

    vector<vector<int>> board(N, vector<int>(M, 0));
    queue<pair<int, int>> virus;
    vector<pair<int, int>> safe;
    int safeNum = 0;
    int answer = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> board[i][j];
            if (board[i][j] == 2)
            {
                virus.push({ i, j });
            }
            else if (board[i][j] == 0)
            {
                safe.push_back({ i, j });
                safeNum += 1;
            }
        }
    }

    int safeLen = safe.size();
    for (int i = 0; i < safeLen; ++i)
    {
        for (int j = i + 1; j < safeLen; ++j)
        {
            for (int z = j + 1; z < safeLen; ++z)
            {
                vector<vector<int>> cpBoard = board;
                queue<pair<int, int>> cpVirus = virus;
                int cpSafeNum = safeNum - 3;
                cpBoard[safe[i].first][safe[i].second] = 1;
                cpBoard[safe[j].first][safe[j].second] = 1;
                cpBoard[safe[z].first][safe[z].second] = 1;

                while (!cpVirus.empty())
                {
                    auto [i, j] = cpVirus.front();
                    cpVirus.pop();

                    for (int idx = 0; idx < 4; ++idx)
                    {
                        int ni = i + di[idx];
                        int nj = j + dj[idx];

                        if (ni < 0 || ni >= N || nj < 0 || nj >= M)
                        {
                            continue;
                        }
                        if (cpBoard[ni][nj] == 0)
                        {
                            cpBoard[ni][nj] = 2;
                            cpSafeNum -= 1;
                            cpVirus.push({ ni, nj });
                        }
                    }
                }
                answer = max(answer, cpSafeNum);
            }
        }
    }

    cout << answer << '\n';


    return (0);
}
