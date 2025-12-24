#include <iostream>
#include <vector>

using namespace std;

void repeat(int hor, int ver, int depth, vector<string>& board)
{
    if (depth > 0)
    {
        int next = pow(2, depth - 1) * 3;
        repeat(hor, ver, depth - 1, board);
        repeat(hor - next, ver - next, depth - 1, board);
        repeat(hor - next, ver + next, depth - 1, board);
    }
    else
    {
        board[hor - 0][ver - 0] = '*';
        board[hor - 1][ver - 1] = '*';
        board[hor - 1][ver + 1] = '*';
        board[hor - 2][ver - 2] = '*';
        board[hor - 2][ver - 1] = '*';
        board[hor - 2][ver + 0] = '*';
        board[hor - 2][ver + 1] = '*';
        board[hor - 2][ver + 2] = '*';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    cin >> N;
    vector<string> board(N, string(N * 2, ' '));
    int depth = 0;
    int count = N / 3 / 2;
    while (count)
    {
        count = count / 2;
        depth += 1;
    }
    repeat(N - 1, N - 1, depth, board);
    reverse(board.begin(), board.end());
    for (int i = 0; i < board.size() - 1; ++i)
    {
        cout << board[i] << '\n';
    }

    cout << board[board.size() - 1];
    return (0);
}
