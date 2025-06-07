#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int b4949()
{
    while (true)
    {
        string s = "";
        getline(cin, s);
        if (s.size() == 1 && s[0] == '.')
        {
            break;
        }
        stringstream ss(s);
        stack<char> stk;
        char c;
        while (ss >> c)
        {
            if (c == '(' || c == '[')
            {
                stk.push(c);
            }
            else if (c == ')' || c == ']')
            {
                if (stk.empty())
                {
                    stk.push(c);
                    break;
                }
                else if (c - stk.top() != 1 && c - stk.top() != 2)
                {
                    break;
                }
                else
                {
                    stk.pop();
                }
            }
        }
        if (!stk.empty())
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return (0);
}