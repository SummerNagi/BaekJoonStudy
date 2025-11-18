#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> vec;
        for (int j = 0; j < 3; j++) {
            cin >> a;
            vec.push_back(a);
        }

        sort(vec.begin(), vec.end());

        cout << "Scenario #" << i + 1 << ":\n";

        if (pow(vec[0], 2) + pow(vec[1], 2) == pow(vec[2], 2)) {
            cout << "yes\n\n";
        }
        else {
            cout << "no\n\n";
        }
    }

	return 0;
} 
