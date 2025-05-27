#include <vector>
#include <iostream>

using namespace std;

void mergesort(int s, int e, vector<int>& lst)
{
    if (s < e)
    {
        int mid = (e - s) / 2;
        cout << mid << endl;
        mergesort(s, mid, lst);
        mergesort(mid + 1, e, lst);

        vector<int> left(lst.begin() + s, lst.begin() + mid);
        int leftIdx = 0;
        vector<int> right(lst.begin() + mid, lst.begin() + e);
        int rightIdx = 0;
        for (int i = s; i < e; ++i)
        {
            if (left.size() <= leftIdx)
            {
                lst[i] = right[rightIdx];
                ++rightIdx;
            }
            else if (right.size() <= rightIdx)
            {
                lst[i] = left[leftIdx];
                ++leftIdx;
            }
            else if (left[leftIdx] < right[rightIdx])
            {
                lst[i] = left[leftIdx];
                ++leftIdx;
            }
            else
            {
                lst[i] = right[rightIdx];
                ++rightIdx;
            }
        }
    }
}

int b1929()
{
    int N = 0;
    cin >> N;
    vector<int> lst(N, 0);

    for (int i = 0; i < N; ++i)
    {
        cin >> lst[i];
    }
    mergesort(0, lst.size(), lst);
    for (int i = 0; i < N; ++i)
    {
        cout << lst[i] << " ";
    }
    return (0);
}