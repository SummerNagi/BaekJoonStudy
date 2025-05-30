#include <iostream>
#include <queue>

using namespace std;

struct cmp
{
    bool operator()(const int a, const int b) {
        return (a > b);
    }
};

int b1715()
{
    priority_queue<int, vector<int>, cmp> pque;
    int N = 0;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        int num = 0;
        cin >> num;
        pque.push(num);
    }

    if (N == 1)
    {
        cout << 0 << endl;
        return (0);
    }

    while (pque.size() > 1)
    {
        int a = pque.top();
        pque.pop();
        int b = pque.top();
        pque.pop();
        int ab = a + b;
        count = count + ab;
        pque.push(ab);
    }

    cout << count << endl;
    return (0);
}