#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int b1764()
{
    int N = 0;
    int M = 0;
    cin >> N >> M;

    set<string> s1;
    set<string> s2;
    set<string> interS;

    for (int i = 0; i < N; ++i)
    {
        string name = "";
        cin >> name;
        s1.insert(name);
    }
    for (int i = 0; i < M; ++i)
    {
        string name = "";
        cin >> name;
        s2.insert(name);
    }

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        insert_iterator<set<string>>(interS, interS.begin()));

    cout << interS.size() << endl;
    for (set<string>::iterator it = interS.begin(); it != interS.end(); ++it)
    {
        cout << *it << endl;
    }
    return (0);
}