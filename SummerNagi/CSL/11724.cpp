#include <iostream>
#include <vector>
#include <set>

using namespace std;

static int unionFind(vector<int>& host, int num)
{
    if (host[num] == num)
        return (num);
    return (unionFind(host, host[num]));
}

int b11724()
{
    int N = 0;
    cin >> N;
    int M = 0;
    cin >> M;
    vector<int> host(N + 1, 0);
    set<int> st;
    
    for (int i = 1; i < N + 1; ++i)
    {
        host[i] = i;
    }

    for (int i = 0; i < M; ++i)
    {
        int p1 = 0;
        int p2 = 0;
        cin >> p1 >> p2;
        int p1Host = unionFind(host, p1);
        int p2Host = unionFind(host, p2);
        host[max(p1Host, p2Host)] = min(p1Host, p2Host);
    }

    for (int i = 1; i < N + 1; ++i)
    {
        st.insert(unionFind(host, host[i]));
    }

    cout << st.size() << endl;
    return (0);
}
