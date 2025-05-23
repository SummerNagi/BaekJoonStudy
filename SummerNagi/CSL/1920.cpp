#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int b1920()
{
    std::cin.tie(0);
    std::cin.sync_with_stdio(false);
    std::ios_base::sync_with_stdio(false);
    int N = 0;
    cin >> N;
    vector<int> rng(N, 0);
    for (int i = 0; i < N; ++i)
    {
        cin >> rng[i];
    }
    sort(rng.begin(), rng.end());

    int M = 0;
    cin >> M;
    for (int i = 0; i < M; ++i)
    {
        int num = 0;
        cin >> num;
        vector<int>::iterator it = lower_bound(rng.begin(), rng.end(), num);
        if (it != rng.end() && *it == num)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    return (0);
}