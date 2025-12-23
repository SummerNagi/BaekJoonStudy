#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    long long sum = 0;
    string temp = "";
    while (t--) 
    {
		char input;
        cin >> input;

        if (isdigit(input)) 
        {
            temp += input;
        }
        else if (isalpha(input)) 
        {
            if (!temp.empty()) 
            {
                sum += stoll(temp);
                temp = "";
            }
        }
    }

    if (!temp.empty()) sum += stoll(temp);
    cout << sum;
	return 0;
}