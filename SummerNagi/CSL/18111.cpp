#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, B;
    cin >> N >> M >> B;

    vector<int> vec(257, 0);

    for (int i = 0; i < N * M; ++i)
    {
        int num = 0;
        cin >> num;
        vec[num] = vec[num] + 1;
    }

    long long answer = 1e9;
    int depth = 0;
    for (int i = 256; i >= 0; --i)
    {
        long long memo = 0;
        int temp = B;
        for (int j = 256; j >= 0; --j)
        {
            int k = i - j;
            if (k < 0)
            {
                int w = (j - i) * vec[j];
                temp += w;
                memo = memo + (w * 2);
            }
            else if (k > 0)
            {
                int w = (i - j) * vec[j];
                temp -= w;
                memo = memo + w;
            }

            if (temp < 0)
            {
                memo = 1e9;
                break;
            }
        }
        if (answer > memo)
        {
            answer = memo;
            depth = i;
        }
    }

    cout << answer << ' ' << depth << '\n';
    return (0);
}
