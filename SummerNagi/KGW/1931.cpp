#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; 

	cin >> N ;

	vector<pair<int,int>> A;

	for (int i = 0; i < N; i++)
	{
		int end, start;

		cin >> start >> end;

		A.push_back({end,start});
	}

	sort(A.begin(),A.end());

	int count =0;
	
	int last =0;

	for (int i = 0; i < N; i++)
	{
		if (A[i].second >= last )
		{
		 last = A[i].first;

		 count++;
		} 
	}

	cout << count << "\n";
}