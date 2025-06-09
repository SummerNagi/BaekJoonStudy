#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

bool isPalindrome(int target)
{
	string tempStr = to_string(target); // 문자열로 변환
	char const* temp = tempStr.c_str(); // 배열로 변환
	int s = 0;
	int e = tempStr.size() - 1;

	while (s < e)
	{
		if (temp[s] != temp[e])
		{
			return false;
		}
		s++;
		e--;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;
	vector<long> arr(1000001);

	// 배열 초기화
	for (int i = 2; i <= 1000000; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(1000000); i++)
	{
		if(arr[i] == 0) continue;
		for (int j = i + i; j <= 1000000; j += i)
		{
			// 배수 지우기
			arr[j] = 0;
		}
	}

	long i = n;
	while (i <= 1000000)
	{
		if (arr[i] != 0 && isPalindrome(arr[i]))
		{
			cout << arr[i] << "\n";
			break;
		}
		++i;
	}

	return 0;
}