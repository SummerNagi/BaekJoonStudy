#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int b1253()
{
    std::cin.tie(0);
    std::cin.sync_with_stdio(false);
    std::ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;
    vector<int> lst;
    unordered_map<int, int> m;
    int answer = 0;

    for (int i = 0; i < N; ++i)
    {
        int num = 0;
        cin >> num;
        lst.push_back(num);
        m[num] = m[num] + 1;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i == j)
                continue;
            int target = lst[i] - lst[j];
            if (m.find(target) != m.end())
            {
                if (target == lst[j] && (m[target] == 1 || (lst[i] == lst[j] && m[target] == 2)))
                    continue;
                if (target == lst[i] && (m[target] == 1 || (lst[i] == lst[j] && m[target] == 2)))
                    continue;
                answer = answer + 1;
                break;
            }
        }
    }
    cout << answer << '\n';
    return (0);
}