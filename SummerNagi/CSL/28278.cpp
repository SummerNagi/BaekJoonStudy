#include <iostream>

typedef struct S_MyStack
{
    int top_ = 0;
    int temp[1'000'001];
    void (S_MyStack::* func[5])();

    void init()
    {
        func[0] = &S_MyStack::push;
        func[1] = &S_MyStack::pop;
        func[2] = &S_MyStack::size;
        func[3] = &S_MyStack::empty;
        func[4] = &S_MyStack::top;
    }

    void command()
    {
        int num = 0;
        std::cin >> num;
        (this->*func[num - 1])();
    }

    void push()
    {
        int num = 0;
        std::cin >> num;
        temp[top_] = num;
        top_ = top_ + 1;
    }

    void pop()
    {
        if (top_ > 0)
        {
            std::cout << temp[top_ - 1] << '\n';
            top_ = top_ - 1;
        }
        else
        {
            std::cout << -1 << '\n';
        }
    }

    void size()
    {
        std::cout << top_ << '\n';
    }

    void empty()
    {
        if (top_ == 0)
        {
            std::cout << 1 << '\n';
        }
        else
        {
            std::cout << 0 << '\n';
        }
    }

    void top()
    {
        if (top_ > 0)
        {
            std::cout << temp[top_ - 1] << '\n';
        }
        else
        {
            std::cout << -1 << '\n';
        }
    }

} MyStack;


int b28278()
{
    std::cin.tie(0);
    std::cin.sync_with_stdio(false);
    std::ios_base::sync_with_stdio(false);
    int num = 0;
    std::cin >> num;
    MyStack stk;
    stk.init();
    for (int i = 0; i < num; ++i)
    {
        stk.command();
    }
    return (0);
}