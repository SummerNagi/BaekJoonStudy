#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N = 0;
    cin >> N;
    int M = 0;
    cin >> M;

    deque<char> dque;
    int answer = 0;
    int change = 0;
    for (int i = 0; i < M; ++i)
    {
        char c;
        cin >> c;
        if (dque.empty())
        {
            if (c == 'I')
            {
                dque.push_back(c);
            }
        }
        else
        {
            char n = dque.back();
            if (n != c)
            {
                dque.push_back(c);
                if (c == 'I')
                {
                    change += 1;
                }
            }
            else
            {
                while (!dque.empty())
                {
                    dque.pop_front();
                }
                if (c == 'I')
                {
                    dque.push_back('I');
                }
                change = 0;
            }
        }
        if (change == N)
        {
            answer += 1;
            change -= 1;
            dque.pop_front();
            dque.pop_front();
        }
    }

    cout << answer << '\n';

    return (0);
}
