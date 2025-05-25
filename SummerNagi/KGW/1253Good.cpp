#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end()); 
    int result = 0;

    for (int i = 0; i < n; ++i) {
        int target = a[i];
        int left = 0, right = n - 1;

        while (left < right) {
            if (left == i) {
                left++;
                continue;
            }
            if (right == i) {
                right--;
                continue;
            }

            int sum = a[left] + a[right];
            if (sum == target) {
                result++;
                break;
            }
            else if (sum < target)
                left++;
            else
                right--;
        }
    }

    cout << result << "\n";
    return 0;
}
