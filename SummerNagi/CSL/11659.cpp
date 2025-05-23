#include <iostream>
#include <vector>

using namespace std;

int b11659()
{
    std::cin.tie(0);
    std::cin.sync_with_stdio(false);
    std::ios_base::sync_with_stdio(false);
    int N = 0; int M = 0;
    cin >> N >> M;

    vector<int> lst(N, 0);
    vector<int> sum_lst(N + 1, 0);

    for (int i = 0; i < N; ++i)
    {
        cin >> lst[i];
        sum_lst[i + 1] = sum_lst[i] + lst[i];
    }

    for (int i = 0; i < M; ++i)
    {
        int start = 0; int end = 0;
        cin >> start >> end;
        cout << sum_lst[end] - sum_lst[start - 1] << '\n';
    }

    return (0);
}