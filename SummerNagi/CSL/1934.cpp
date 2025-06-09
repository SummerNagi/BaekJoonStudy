#include <iostream>
#include <cmath>

using namespace std;

int GCD(int a, int b)
{
    if (a % b == 0)
        return (b);
    return (GCD(b, a % b));
}

int b1934()
{
    int T = 0;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int A = 0;
        int B = 0;

        cin >> A >> B;
        cout << (A * B) / GCD(max(A, B), min(A, B)) << endl;
    }
    return (0);
}