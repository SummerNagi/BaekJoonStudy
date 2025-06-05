#include <iostream>
#include <queue>

using namespace std;

struct cmp
{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b)
    {
        if (a.second == b.second)
            return (a.first > b.first);
        return (a.second > b.second);
    }
};

int b1931()
{
    
    int N = 0;
    cin >> N;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pque;

    for (int i = 0; i < N; ++i)
    {
        pair<int, int> pr;
        cin >> pr.first >> pr.second;
        pque.push(pr);
    }

    int answer = 0;
    int flag_num = -1;
    while (!pque.empty())
    {
        pair<int, int> pr = pque.top();
        pque.pop();
        if (pr.first < flag_num)
        {
            continue ;
        }
        else
        {
            answer = answer + 1;
            flag_num = pr.second;
        }
    }

    cout << answer << endl;
    return (0);
}