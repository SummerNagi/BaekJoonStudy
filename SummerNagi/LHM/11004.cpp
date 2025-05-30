//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void swap(vector<int>& arr, int s, int e)
//{
//	int temp = arr[s];
//	arr[s] = arr[e];
//	arr[e] = temp;
//}
//
//int partition(vector<int>& arr, int s, int e)
//{
//	// start, end �ϳ� ���� �ٷ� swap
//	if (s + 1 == e)
//	{
//		if(arr[s]>arr[e]) swap(arr,s,e);
//		return e;
//	}
//
//	// �߰� ��ġ�� pivot���� ����
//	int m = (s + e) / 2;
//	swap(arr, s, m);
//
//	int pivot = arr[s];
//	int i = s + 1;
//	int j = e;
//
//	while (i <= j)
//	{
//		// pivot���� ���� �� ã�� (�������� �̵�)
//		while(pivot < arr[j] && j > 0) --j;
//		// pivot���� ū �� ã�� (���������� �̵�)
//		while (pivot > arr[i] && i < arr.size() - 1) ++i;
//		// ���� Ž���� �� �� ���������� swap
//		if (i <= j) swap(arr, i++, j--); // @@@ ++i, i++ ������?
//	}
//	arr[s] = arr[j];
//	arr[j] = pivot;
//	
//	return j;
//}
//
//void quickSort(vector<int>& arr, int s, int e, int k)
//{
//	// ���Ұ� 1���̰ų� ������ ��ȿ���� �ʴٸ�
//	if (s >= e) return;
//
//	// start�� end�� ������ swap
//	int pivot = partition(arr, s, e);
//
//	// K��° ���Ҹ� ã�Ҵٸ�
//	if (pivot == k) return;
//
//	// k���� pivot�� ũ�ٸ� ���ʸ� ����
//	else if (k < pivot)
//	{
//		quickSort(arr, s, pivot - 1, k);
//	}
//	// k���� pivot�� �۴ٸ� �����ʸ� ����
//	else
//	{
//		quickSort(arr, pivot + 1, e, k);
//	}
//}
//
//// K��° ��
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, k;
//	cin >> n >> k;
//	vector<int> arr(n, 0);
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> arr[i];
//	}
//
//	// �� ����
//	quickSort(arr, 0, n - 1, k - 1);
//	cout << arr[k-1];
//
//	return 0;
//}