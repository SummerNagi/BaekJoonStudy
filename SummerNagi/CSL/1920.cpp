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

int b1920_1()
{
    std::cin.tie(0);
    std::cin.sync_with_stdio(false);
    std::ios_base::sync_with_stdio(false);
    int N = 0;
    cin >> N;
    vector<int> lst1(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> lst1[i];
    }
    int M = 0;
    cin >> M;
    vector<pair<int, int>> lst2(M);
    vector<int> ans(M, 0);
    for (int i = 0; i < M; ++i)
    {
        cin >> lst2[i].first;
        lst2[i].second = i;
    }
    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());


    for (int i = 0, j = 0; i < M && j < N;)
    {

        if (lst2[i].first > lst1[j])
        {
            j = j + 1;
            continue;
        }
        else if (lst2[i].first == lst1[j])
        {
            ans[lst2[i].second] = 1;
        }
        i = i + 1;
    }
    for (int i = 0; i < M; ++i)
    {
        cout << ans[i] << '\n';
    }

    return (0);
}