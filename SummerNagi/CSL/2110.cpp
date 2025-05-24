#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findCount(vector<int>& lst, int mid)
{
    int count = 1;
    int start = lst[0];

    while (true)
    {
        vector<int>::iterator it = lower_bound(lst.begin(), lst.end(), start + mid);
        if (it == lst.end())
        {
            break;
        }

        count = count + 1;
        start = *it;
    }

    return (count);
}

int b2110() 
{
    std::cin.tie(0);
    std::cin.sync_with_stdio(false);
    std::ios_base::sync_with_stdio(false);

    int N = 0; int M = 0;
    cin >> N >> M;
    vector<int> lst(N, 0);

    for (int i = 0; i < N; ++i)
    {
        cin >> lst[i];
    }

    sort(lst.begin(), lst.end());

    int left = 0;
    int right = lst[N - 1] - lst[0] + 1;
    int mid = 0;

    while (left + 1 < right)
    {
        mid = (left + right) / 2;
        int count = findCount(lst, mid);
        if (M <= count)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << left << endl;
    return (0);
}