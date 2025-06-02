#include <iostream>
#include <vector>

using namespace std;

int fib(int n)
{
    static int count = 0;
    static void* memo_n = &n;
    int num = 0;
    if (n == 1 || n == 2)
    {
        count = count + 1;
        num = 1;
    }
    else
    {
        num = (fib(n - 1) + fib(n - 2));
    }
    if (memo_n == &n)
    {
        cout << count << " ";
    }
    return (num);
}

int fibonacci(int n) 
{
    static int count = 0;
    static int memo[41] = {0,};
    static void* memo_n = &n;
    int num = 0;
    
    if (n == 1 || n == 2)
    {
        num = 1;
    }
    else if (memo[n] != 0)
    {
        num = memo[n];
    }
    else
    {
        count = count + 1;
        memo[n] = (fibonacci(n - 1) + fibonacci(n - 2));
    } 
    if (memo_n == &n)
    {
        cout << count << endl;
    }
    return (num);
}

int b24416()
{
    int N = 0;
    cin >> N;
    vector<int> memo(N + 1, 0);

    int num1 = fib(N);
    int num2 = fibonacci(N);
    return (0);
}
