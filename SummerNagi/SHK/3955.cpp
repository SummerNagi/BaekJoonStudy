//#include <iostream>
//#include <numeric>
//#include <algorithm>
//#include <climits>
//
//using namespace std;
//
//long long K, C;
//
//long long extended_gcd(long long a, long long b, long long& s, long long& t)
//{
//    if (b == 0)
//    {
//        s = 1;
//        t = 0;
//        return a;
//    }
//    long long s1, t1;
//    long long d = extended_gcd(b, a % b, s1, t1);
//    s = t1;
//    t = s1 - (a / b) * t1;
//    return d;
//}
//
//long long ceil_div(long long a, long long b)
//{
//    if (b < 0)
//    {
//        a = -a;
//        b = -b;
//    }
//    return (a + b - 1) / b;
//}
//
//// 내림 함수 (정수 나눗셈)
//long long floor_div(long long a, long long b) {
//    if (b < 0)
//    {
//        a = -a;
//        b = -b;
//    }
//    return a / b;
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        cin >> K >> C;
//
//        if (C == 1)
//        {
//            if (K + 1 > 1000000000)
//            {
//                cout << "IMPOSSIBLE\n";
//            }
//            else 
//            {
//                cout << K + 1 << "\n";
//            }
//            continue;
//        }
//
//        long long s, t, gcd_val;
//        gcd_val = extended_gcd(K, C, s, t);
//
//        if (gcd_val != 1)
//        {
//            cout << "IMPOSSIBLE\n";
//            continue;
//        }
//
//
//        long long X0 = -s;
//        long long Y0 = t;
//
//
//        // k의 하한 (min k)
//        long long k_min_X = ceil_div(1 - X0, C);
//        long long k_min_Y = ceil_div(1 - Y0, K);
//        long long k_min = max(k_min_X, k_min_Y);
//
//        // k의 상한 (max k)
//        long long k_max_Y = floor_div(1000000000 - Y0, K);
//
//        if (k_min > k_max_Y)
//        {
//            cout << "IMPOSSIBLE\n";
//        }
//        else
//        {
//            long long final_X = X0 + C * k_min;
//            long long final_Y = Y0 + K * k_min;
//            cout << final_Y << "\n";
//        }
//    }
//    return 0;
//}