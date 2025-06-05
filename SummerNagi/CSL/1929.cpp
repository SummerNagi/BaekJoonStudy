#include <iostream>
#include <vector>

using namespace std;

int b1929()
{
    int N = 0;
    int M = 0;
    cin >> N >> M;
    vector<bool> lst(1'000'001, false);

    lst[0] = true;
    lst[1] = true;
    for (int i = 2; i < 1'000'001; ++i)
    {
        if (lst[i] == false)
        {
            for (long num = i + i; num < 1'000'001; num = num + i)
            {
                lst[num] = true;
            }
        }
    }

    for (int i = N; i <= M; ++i)
    {
        if (lst[i] == false)
        {
            cout << i << '\n';
        }
    }
    return (0);
}