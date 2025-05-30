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
//	// start, end 하나 차이 바로 swap
//	if (s + 1 == e)
//	{
//		if(arr[s]>arr[e]) swap(arr,s,e);
//		return e;
//	}
//
//	// 중간 위치를 pivot으로 설정
//	int m = (s + e) / 2;
//	swap(arr, s, m);
//
//	int pivot = arr[s];
//	int i = s + 1;
//	int j = e;
//
//	while (i <= j)
//	{
//		// pivot보다 작은 값 찾기 (왼쪽으로 이동)
//		while(pivot < arr[j] && j > 0) --j;
//		// pivot보다 큰 값 찾기 (오른쪽으로 이동)
//		while (pivot > arr[i] && i < arr.size() - 1) ++i;
//		// 아직 탐색할 게 더 남아있으면 swap
//		if (i <= j) swap(arr, i++, j--); // @@@ ++i, i++ 뭔차이?
//	}
//	arr[s] = arr[j];
//	arr[j] = pivot;
//	
//	return j;
//}
//
//void quickSort(vector<int>& arr, int s, int e, int k)
//{
//	// 원소가 1개이거나 범위가 유효하지 않다면
//	if (s >= e) return;
//
//	// start와 end의 데이터 swap
//	int pivot = partition(arr, s, e);
//
//	// K번째 원소를 찾았다면
//	if (pivot == k) return;
//
//	// k보다 pivot이 크다면 왼쪽만 정렬
//	else if (k < pivot)
//	{
//		quickSort(arr, s, pivot - 1, k);
//	}
//	// k보다 pivot이 작다면 오른쪽만 정렬
//	else
//	{
//		quickSort(arr, pivot + 1, e, k);
//	}
//}
//
//// K번째 수
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
//	// 퀵 정렬
//	quickSort(arr, 0, n - 1, k - 1);
//	cout << arr[k-1];
//
//	return 0;
//}