#include <iostream>
#include <queue>
#include <set>

using namespace std;

template<class T,
    class Container = std::vector<T>,
    class Compare = std::less<T>>
    class qu : public std::priority_queue<T, Container, Compare>
{
public:
    qu() : std::priority_queue<T, Container, Compare>() {}

    void show()
    {
        for (int i = 0; i < this->c.size(); ++i)
        {
            cout << this->c[i] << endl;
        }
    }
};

int b2696()
{
    qu<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(-1);
    a.push(-3);

    a.show();
    return 0;
}