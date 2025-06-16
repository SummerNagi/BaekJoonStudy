#include <iostream>
#include <vector>

using namespace std;

class MyQueue
{
public:
    MyQueue()
        : _v(2000000, 0)
    {
    }

public:
    void push()
    {
        int num = 0;
        cin >> num;
        this->_v[this->_back] = num;
        this->_back = this->_back + 1;
    }

    void pop()
    {
        if (this->_back - this->_front == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << this->_v[this->_front] << '\n';
            this->_front = this->_front + 1;
        }
    }

    void size()
    {
        cout << (this->_back - this->_front) << '\n';
    }

    void empty()
    {
        cout << (this->_back - this->_front == 0 ? 1 : 0) << '\n';
    }

    void front()
    {
        if (this->_back - this->_front == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << this->_v[this->_front] << '\n';
        }
    }

    void back()
    {
        if (this->_back - this->_front == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << this->_v[this->_back - 1] << '\n';
        }
    }
private:
    vector<int> _v;
    int _front = 0;
    int _back = 0;
};


int b18258()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    ios_base::sync_with_stdio(false);

    MyQueue que;
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string s = "";
        cin >> s;
        if (s == "push")
        {
            que.push();
        }
        else if (s == "pop")
        {
            que.pop();
        }
        else if (s == "size")
        {
            que.size();
        }
        else if (s == "empty")
        {
            que.empty();
        }
        else if (s == "front")
        {
            que.front();
        }
        else
        {
            que.back();
        }
    }
    return (0);
}