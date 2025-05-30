#include <iostream>
#include <vector>

using namespace std;

int b11047()
{
    int N = 0;
    int K = 0;
    int answer = 0;
    cin >> N >> K;
    vector<int> lst(N, 0);

    for (int i = 0; i < N; ++i)
    {
        cin >> lst[i];
    }

    for (int i = lst.size() - 1; i >= 0 && K != 0; --i)
    {
        if (K - lst[i] < 0)
        {
            continue;
        }
        answer = answer + (K / lst[i]);
        K = K % lst[i];
    }

    cout << answer << endl;
    return (0);

}