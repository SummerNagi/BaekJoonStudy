#include <iostream>
#include <string>
#include <map>

using namespace std;

int b1213()
{
    map<char, int> m;
    string s = "";
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        m[s[i]] = m[s[i]] + 1;
    }

    int dep = 0;
    int flag = false;
    for (map<char, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        if (it->second & 1)
        {
            if (flag == false && (s.size() & 1))
            {
                flag = true;
                s[s.size() / 2] = it->first;
                it->second = it->second - 1;
            }
            else
            {
                cout << "I'm Sorry Hansoo" << endl;
                return (0);
            }
        }
        for (int i = 0; i < it->second; i = i + 2)
        {
            s[dep] = it->first;
            s[s.size() - dep - 1] = it->first;
            dep = dep + 1;
        }
    }
    cout << s << endl;
    return (0);
}