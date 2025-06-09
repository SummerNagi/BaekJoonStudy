#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

int b1456()
{
    long long N = 0;
    long long M = 0;
    cin >> N >> M;
    double a = sqrt(M);
    long long b = (long long)a + 1;
    vector<bool> lst(b, false);
    unordered_set<long long> lst_memo;

    lst[0] = true;
    lst[1] = true;
    for (long long i = 2; i < b; ++i)
    {
        if (lst[i] == false)
        {
            for (long long num = i * i; num < M + 1; num = num * i)
            {
                if (num >= N && lst_memo.find(num) == lst_memo.end())
                {
                    lst_memo.insert(num);
                }
                if (num > M / i)
                {
                    break ;
                }
            }
            for (long long num = i + i; num < b; num = num + i)
            {
                lst[num] = true;
            }
        }
    }

    cout << lst_memo.size() << endl;
    return (0);
}