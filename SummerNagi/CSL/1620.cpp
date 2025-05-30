#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int b1620()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    ios_base::sync_with_stdio(false);

    int N = 0;
    int M = 0;
    cin >> N >> M;

    unordered_map<string, int> s_i_m;
    unordered_map<int, string> i_s_m;
    for (int i = 1; i <= N; ++i)
    {
        string s = "";
        cin >> s;
        s_i_m[s] = i;
        i_s_m[i] = s;
    }

    for (int i = 0; i < M; ++i)
    {
        string s = "";
        cin >> s;
        if (isdigit(s[0]))
        {
            cout << i_s_m[stoi(s)] << '\n';
        }
        else
        {
            cout << s_i_m[s] << '\n';
        }
    }
    return (0);
}