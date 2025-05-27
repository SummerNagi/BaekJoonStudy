#include <iostream>
#include <vector>

using namespace std;

int b17266()
{
    int N = 0;
    cin >> N;
    int M = 0;
    cin >> M;
    vector<int> lst;
    lst.push_back(0);
    for (int i = 0; i < M; ++i)
    {
        int num = 0;
        cin >> num;
        lst.push_back(num);
    }
    lst[0] = -(lst[1]);
    lst.push_back(N + (N - lst.back()));

    int left = 0;
    int right = N;
    while (left < right)
    {
        int mid = (left + right) / 2;
        bool flag = true;
        for (int i = 0; i < M + 1; ++i)
        {
            if (lst[i + 1] - lst[i] > mid * 2)
            {
                flag = false;
                left = mid + 1;
                break;
            }
        }
        if (flag == true)
        {
            right = mid;
        }
    }
    cout << left << endl;
    return (0);
}