#include <iostream>
#include <deque>

using namespace std;

// 타입 선언
typedef pair<int, int> Node;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 숫자 개수, 슬라이딩 윈도우의 크기
	int n, l;
	cin >> n >> l;
	// 데이터를 담을 덱 자료구조
	deque<Node> mydeque;

	for (int i = 0; i < n; ++i)
	{
		int now;
		cin >> now;
		// 덱의 마지막 위치에서부터 now보다 큰 값은 덱에서 제거
		while (mydeque.size() && mydeque.back().second > now)
		{
			mydeque.pop_back();
		}
		
		// 덱의 마지막 위치에 now값 저장
		mydeque.push_back(Node(i, now));
		
		// 덱의 첫 번째 위치에서부터 L범위를 벗어난 값을 덱에서 제거
		if (mydeque.front().first <= i - l)
		{
			mydeque.pop_front();
		}

		cout << mydeque.front().second << " ";
	}

	return 0;
}