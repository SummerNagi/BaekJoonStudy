#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    constexpr int MAX_NUM = 10'000;

    int T = 0;
    cin >> T;

    while (T--)
    {
        vector<string> memo(MAX_NUM, "");
        auto isb = [&memo](int next, int n) {
            return (memo[next].size() == 0 || memo[next].size() > memo[n].size() + 1);
            };
        int num = 0;
        cin >> num;
        int target = 0;
        cin >> target;

        bool flag = true;
        queue<int> que;
        que.push(num);
        while (flag && !que.empty())
        {
            int round = que.size();
            while (round--)
            {
                int num = que.front();
                que.pop();

                if (num == target)
                {
                    cout << memo[num] << '\n';
                    flag = false;
                    break;
                }
                int next_num = num * 2 % 10000;
                if (isb(next_num, num))
                {
                    if (num != 0)
                    {
                        memo[next_num] = memo[num] + 'D';
                        que.push(next_num);
                    }
                }
                next_num = (num == 0 ? 9999 : num - 1);
                if (isb(next_num, num))
                {
                    memo[next_num] = memo[num] + 'S';
                    que.push(next_num);
                }
                next_num = ((num / 1000) + (num % 1000 * 10));
                if (isb(next_num, num))
                {
                    memo[next_num] = memo[num] + 'L';
                    que.push(next_num);
                }
                next_num = ((num % 10 * 1000) + (num / 10));
                if (isb(next_num, num))
                {
                    memo[next_num] = memo[num] + 'R';
                    que.push(next_num);
                }
            }
        }
    }

    return (0);
}
