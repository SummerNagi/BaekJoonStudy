#include <iostream>
#include <queue>

using namespace std;

int b11866()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    ios_base::sync_with_stdio(false);

    int N = 0;
    int k = 0;

    cin >> N >> k;
    queue<int> que;
    for (int i = 1; i <= N; ++i)
    {
        que.push(i);
    }

    int count = 0;
    cout << '<';
    while (que.size() != 1)
    {
        count = count + 1;
        int num = que.front();
        que.pop();
        if (count == k)
        {
            cout << num << ", ";
            count = 0;
        }
        else
        {
            que.push(num);
        }
    }
    cout << que.front() << ">" << '\n';
    return (0);
}