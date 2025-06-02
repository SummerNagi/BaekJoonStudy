#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
vector<int> temp;

void merg_sort(int s, int e)
{
	if(e - s < 1) return;
	int m = s + (e - s) / 2;

	// ���
	merg_sort(s, m);
	merg_sort(m+1, e);

	for (int i = s; i <= e; ++i) temp[i] = arr[i];

	int k = s;
	int idx1 = s;
	int idx2 = m+1;

	// �� �׷� ����
	while (idx1 <= m && idx2 <= e)
	{
		if (temp[idx1] > temp[idx2])
		{
			arr[k] = temp[idx2];
			k++;
			idx2++;
		}
		else
		{
			arr[k] = temp[idx1];
			k++;
			idx1++;
		}
	}

	// ���� �׷��� ��� ���õ� �� �����ִ� �� ����
	while (idx1 <= m)
	{
		arr[k] = temp[idx1];
		k++;
		idx1++;
	}

	while (idx2 <= e)
	{
		arr[k] = temp[idx2];
		k++;
		idx2++;
	}
}

int main()
{
	int n;
	cin >> n;
	
	arr = vector<int>(n+1);
	temp = vector<int>(n+1);

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	merg_sort(1, n);

	for (int i = 1; i <= n; ++i)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}