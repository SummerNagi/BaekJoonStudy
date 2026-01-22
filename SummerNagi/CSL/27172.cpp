#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    cin >> N;

    constexpr int x = 1'000'000;
    vector<int> memo(x + 1, 0);
    vector<int> check(x + 1, 1);
    vector<int> lst(N, 0);

    for (int i = 0; i < N; ++i)
    {
        cin >> lst[i];
        check[lst[i]] = 0;
    }

    for (int i = 1; i <= x; ++i)
    {
        if (check[i])
        {
            continue;
        }
        for (int num = i + i; num <= x; num = num + i)
        {
            if (check[num])
            {
                continue;
            }
            memo[i] = memo[i] + 1;
            memo[num] = memo[num] - 1;
        }
    }

    for (int num : lst)
    {
        cout << memo[num] << ' ';
    }

    return (0);
}
