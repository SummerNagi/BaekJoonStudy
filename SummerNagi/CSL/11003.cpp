#include <iostream>
#include <deque>

using namespace std;

int b11003()
{
    std::cin.tie(0);
    std::cin.sync_with_stdio(false);
    std::ios_base::sync_with_stdio(false);
    int N = 0;
    cin >> N;
    int M = 0;
    cin >> M;

    deque<pair<int, int>> deq;
    deq.push_back(make_pair(2'147'483'647, M - 1));
    for (int i = 0; i < N; ++i)
    {
        int num = 0;
        cin >> num;
        int count = 1;
        while (!deq.empty() && deq.back().first > num)
        {
            count = count + deq.back().second;
            deq.pop_back();
        }
        deq.push_back(make_pair(num, count));
        cout << deq.front().first << " ";
        deq.front().second = deq.front().second - 1;
        if (deq.front().second == 0)
        {
            deq.pop_front();
        }
    }
    return (0);
}