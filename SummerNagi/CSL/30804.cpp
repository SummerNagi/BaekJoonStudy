#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N = 0;
    cin >> N;

    deque<int> dque;
    int dp[2] = { 0, 0 };
    int count = 0;
    vector<int> lst(10, 0);
    int answer = 0;
    for (int i = 0; i < N; ++i)
    {
        int num = 0;
        cin >> num;

        if (dp[0] == num || dp[1] == num)
        {
            lst[num] += 1;
            dque.push_back(num);
        }
        else
        {
            if (count < 2)
            {
                lst[num] += 1;
                dque.push_back(num);
                dp[count] = num;
                count += 1;
            }
            else
            {
                while (lst[dp[0]] != 0 && lst[dp[1]] != 0)
                {
                    lst[dque.front()] -= 1;
                    dque.pop_front();
                }
                if (lst[dp[0]] == 0)
                {
                    dp[0] = num;
                    lst[num] += 1;
                }
                else
                {
                    dp[1] = num;
                    lst[num] += 1;
                }
                dque.push_back(num);
            }
        }
        answer = max(answer, (int)dque.size());
    }

    cout << answer << '\n';

    return (0);
}
