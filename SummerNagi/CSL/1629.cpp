#include <iostream>

using namespace std;

int b1629()
{
    long long A = 0;
    long long B = 0;
    long long C = 0;
    cin >> A >> B >> C;

    long long answer = 1;
    while (B != 0)
    {
        if (B & 1)
        {
            answer = answer * A % C;
        }
        A = A * A % C;
        B = B / 2;
    }
    cout << answer << endl;
    return (0);
}