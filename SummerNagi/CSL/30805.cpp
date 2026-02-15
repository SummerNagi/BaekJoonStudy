#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N = 0;
    cin >> N;
    vector<pair<int, int>> lst1;
    lst1.reserve(N);
    
    for (int i = 0; i < N; ++i)
    {
        int num = 0;
        cin >> num;

        lst1.emplace_back( num, i );
    }

    int M = 0;
    cin >> M;
    vector<pair<int, int>> lst2;
    lst2.reserve(M);
    for (int i = 0; i < M; ++i)
    {
        int num = 0;
        cin >> num;

        lst2.emplace_back( num, i );
    }
    
    auto cmp =
        [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first)
            {
                return (a.second < b.second);
            }
            return (a.first > b.first);
        };

    sort(lst1.begin(), lst1.end(), cmp);
    sort(lst2.begin(), lst2.end(), cmp);
    int st1 = 0;
    int st2 = 0;
    int dep1 = -1;
    int dep2 = -1;
    vector<int> answer;
    answer.reserve(max(N, M));

    while (st1 < N && st2 < M)
    {
        const pair<int, int>& p1 = lst1[st1];
        const pair<int, int>& p2 = lst2[st2];
        if (p1.second <= dep1)
        {
            st1 += 1;
            continue;
        }
        if (p2.second <= dep2)
        {
            st2 += 1;
            continue;
        }
        if (p1.first == p2.first)
        {
            answer.push_back(p1.first);
            dep1 = p1.second;
            dep2 = p2.second;
            continue;
        }
        if (p1.first > p2.first)
        {
            st1 += 1;
        }
        else
        {
            st2 += 1;
        }
    }

    cout << answer.size() << '\n';
    
    for (int num : answer)
    {
        cout << num << ' ';
    }

    return (0);
}
