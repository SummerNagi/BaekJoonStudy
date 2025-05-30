#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

void repeat(set<string>& st, const string& s, int idx, string memo)
{
    if (idx < s.size())
    {
        st.insert(memo + s[idx]);
        repeat(st, s, idx + 1, memo + s[idx]);
    }
}

int b11478()
{
    string s = "";
    cin >> s;
    set<string> st;
    string memo = "";
    for (int i = 0; i < s.size(); ++i)
    {
        repeat(st, s, i, memo);
    }
    

    cout << st.size() << endl;
    vector<string> vc(st.begin(), st.end());
    for (int i = 0; i < vc.size(); ++i)
    {
        cout << vc[i] << " ";
    }
    return (0);
}