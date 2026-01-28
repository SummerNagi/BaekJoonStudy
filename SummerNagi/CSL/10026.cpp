#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const vector<int> dr = { 0, 0, 1, -1 };
const vector<int> dc = { 1, -1, 0, 0 };

int draw(vector<vector<char>>& board, int i, int j, int N)
{
    if (board[i][j] != 'X')
    {
        queue<pair<int, int>> que;
        char k = board[i][j];
        que.push({ i, j });
        board[i][j] = 'X';

        while (!que.empty())
        {
            auto [r, c] = que.front();
            que.pop();
            
            for (int z = 0; z < 4; ++z)
            {
                int n_r = dr[z] + r;
                int n_c = dc[z] + c;

                if (n_r < 0 || n_r >= N || n_c < 0 || n_c >= N)
                {
                    continue;
                }
                if (board[n_r][n_c] == k)
                {
                    que.push({ n_r, n_c });
                    board[n_r][n_c] = 'X';
                }
            }
        }
        return (1);
    }
    return (0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    cin >> N;
    int answer1 = 0;
    int answer2 = 0;
    vector<vector<char>> board1(N, vector<char>(N));
    vector<vector<char>> board2(N, vector<char>(N));
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> board1[i][j];
            if (board1[i][j] == 'R')
            {
                board2[i][j] = 'G';
            }
            else
            {
                board2[i][j] = board1[i][j];
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            answer1 += draw(board1, i, j, N);
            answer2 += draw(board2, i, j, N);
        }
    }

    cout << answer1 << ' ' << answer2 << '\n';
    return (0);
}
