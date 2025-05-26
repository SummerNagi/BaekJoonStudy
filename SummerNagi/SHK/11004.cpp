#include <iostream>
#include <vector>

using namespace std;

int Partition(vector<int>& arr, int s, int e)
{
	if (arr.size() == 2)
	{
		if (arr[0] > arr[1])
		{
			swap(arr[0], arr[1]);
		}
		return 1;
	}

	int low = s + 1;
	int high = e;
	int p = (s + e) / 2;

	swap(arr[s], arr[p]);

	int pivot = arr[s];

	while (low <= high)
	{
		while (arr[high] > pivot && low <= high)
		{
			high--;
		}

		while (arr[low] < pivot && low <= high)
		{
			low++;
		}

		if (low < high)
		{
			swap(arr[low], arr[high]);
			low++;
			high--;
		}
		else
		{
			break;
		}
	}

	arr[s] = arr[high];
	arr[high] = pivot;

	return high;
}

void QuickSort(vector<int>& arr, int start, int end, int K)
{
	int pivot = Partition(arr, start, end);

	if (pivot == K)
	{
		return;
	}

	else if (pivot < K)
	{
		QuickSort(arr, start, pivot - 1, K);
	}

	else
	{
		QuickSort(arr, pivot + 1, end, K);
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<int> arr(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	QuickSort(arr, 0, N - 1, K - 1);

	cout << arr[K - 1];
}