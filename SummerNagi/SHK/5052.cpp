//#include <iostream>
//
//using namespace std;
//
//bool check = false;
//
//class Node
//{
//public:
//	Node* next[10];
//	bool isEnd;
//
//	Node() : isEnd(false)
//	{
//		fill(next, next + 10, nullptr);
//	}
//
//	~Node()
//	{
//		for (auto& n : next)
//		{
//			delete n;
//		}
//	}
//
//	void insert(const char* key)
//	{
//		if (*key == 0)
//		{
//			isEnd = true;
//
//			for (int i = 0; i < 10; i++)
//			{
//				if (next[i] != nullptr)
//				{
//					check = true;
//					return;
//				}
//			}
//		}
//		else
//		{
//			int next_idx = *key - '0';
//
//			if (next[next_idx] == nullptr)
//			{
//				next[next_idx] = new Node();
//			}
//			else if (next[next_idx]->isEnd)
//			{
//				check = true;
//			}
//
//			if (!check)
//			{
//				next[next_idx]->insert(key + 1);
//			}
//		}
//	}
//
//	//Node* find(const char* key)
//	//{
//	//	if (*key == 0)
//	//	{
//	//		return this;
//	//	}
//	//	else
//	//	{
//	//		int next_idx = *key - '0';
//
//	//		if (next[next_idx] == nullptr)
//	//		{
//	//			return nullptr;
//	//		}
//
//	//		return next[next_idx]->find(key + 1);
//	//	}
//	//}
//};
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		int N;
//		cin >> N;
//
//		Node* root = new Node();
//
//		while (N--)
//		{
//			char num[11];
//			cin >> num;
//
//			root->insert(num);
//		}
//
//		if (check)
//		{
//			cout << "NO" << endl;
//
//		}
//		else
//		{
//			cout << "YES" << endl;
//		}
//
//
//		check = false;
//		delete root;
//	}
//}