#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < n; ++i)
	{
		int insertPoint = i;
		int currentValue = arr[i];
		// (j)뒤에서부터 0까지 insertPoint 찾기
		for (int j = i - 1; j >= 0; --j)
		{
			if (arr[j] < arr[i])
			{
				insertPoint = j + 1;
				break;
			}
			if(j == 0) insertPoint = 0;
		}
		// (i)뒤에서부터 insertPoint+1까지 반복 
		for (int j = i; j > insertPoint; j--)
		{
			// 데이터 한 칸씩 뒤로 밀기
			arr[j] = arr[j - 1];
		}
		// insertPoint에 현재 데이터 삽입
		arr[insertPoint] = currentValue;
	}

	// 합 배열
	vector<int> sum(n);
	sum[0] = arr[0];
	int result = sum[0];
	for (int i = 1; i < n; ++i)
	{
		sum[i] = sum[i-1] + arr[i];
		result += sum[i];
	}

	cout << result;

	return 0;
}