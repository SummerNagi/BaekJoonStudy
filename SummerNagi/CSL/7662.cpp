#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 0;
    cin >> T;

    while (T--)
    {
        priority_queue<pair<int, int>> max_que;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_que;

        int k = 0;
        cin >> k;
        vector<bool> vec(k, false);

        for (int i = 0; i < k; ++i)
        {
            char c;
            cin >> c;
            while (!max_que.empty() && vec[max_que.top().second] == false)
            {
                max_que.pop();
            }
            while (!min_que.empty() && vec[min_que.top().second] == false)
            {
                min_que.pop();
            }
            if (c == 'I')
            {
                int num = 0;
                cin >> num;
                vec[i] = true;
                max_que.push({ num, i });
                min_que.push({ num, i });
            }
            else
            {
                int flag = 0;
                cin >> flag;
                if (!max_que.empty() && flag == 1)
                {
                    pair<int, int> p = max_que.top();
                    max_que.pop();
                    vec[p.second] = false;
                }
                else if (!min_que.empty() && flag == -1)
                {
                    pair<int, int> p = min_que.top();
                    min_que.pop();
                    vec[p.second] = false;
                }
            }
        }

        while (!max_que.empty() && vec[max_que.top().second] == false)
        {
            max_que.pop();
        }
        while (!min_que.empty() && vec[min_que.top().second] == false)
        {
            min_que.pop();
        }

        if (max_que.empty())
        {
            cout << "EMPTY" << '\n';
        }
        else
        {
            cout << max_que.top().first << ' ' << min_que.top().first << '\n';
        }
    }
    return (0);
}
