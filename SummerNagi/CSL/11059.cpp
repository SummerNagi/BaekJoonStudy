#include <iostream>
#include <vector>
#include <string>

using namespace std;

int b11059()
{
    string s = "";
    cin >> s;
    int s_len = (int)s.size();

    vector<int> add_arr(s_len + 1, 0);
    for (int i = 0; i < s_len; ++i)
    {
        add_arr[i + 1] = add_arr[i] + (s[i] - 48);
    }

    for (int range = (s_len & 1 ? s_len - 1 : s_len); range >= 2; range = range - 2)
    {
        for (int start = 0; start + range <= s_len; ++start)
        {
            int mid = start + range / 2;
            int end = start + range;
            int left = add_arr[mid] - add_arr[start];
            int right = add_arr[end] - add_arr[mid];

            if (left == right)
            {
                cout << range << endl;
                return (0);
            }
        }
    }
    return (0);
}