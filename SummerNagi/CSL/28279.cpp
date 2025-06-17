#include <iostream>
#include <vector>

using namespace std;

typedef struct s_node
{
	struct s_node* _before;
	struct s_node* _next;
	int _num;
} node;

class MyDeque
{
public:
	MyDeque()
		: _front(nullptr), _end(nullptr), _size(0)
	{

	}

	~MyDeque()
	{
		while (this->_size)
		{
			this->pop_front();
		}
	}

	void push_front(int num)
	{
		node* new_node = this->newNode(num);

		new_node->_before = nullptr;
		new_node->_next = this->_front;
		if (this->_front != nullptr)
		{
			this->_front->_before = new_node;
		}
		this->_front = new_node;
		if (this->_end == nullptr)
		{
			this->_end = new_node;
		}
		this->_size = this->_size + 1;
	}

	void push_back(int num)
	{
		node* new_node = this->newNode(num);
		new_node->_before = this->_end;
		new_node->_next = nullptr;
		if (this->_end != nullptr)
		{
			this->_end->_next = new_node;
		}
		this->_end = new_node;
		if (this->_front == nullptr)
		{
			this->_front = new_node;
		}
		this->_size = this->_size + 1;
	}

	int pop_front()
	{
		int num = this->front();
		if (num != -1)
		{
			node* memo = this->_front;
			this->_front = this->_front->_next;
			if (this->_front != nullptr)
			{
				this->_front->_before = nullptr;
			}
			this->_size = this->_size - 1;
			if (this->_size == 0)
			{
				this->_end = nullptr;
			}
			delete (memo);
			memo = nullptr;
		}
		return (num);
	}

	int pop_back()
	{
		int num = this->end();
		if (num != -1)
		{
			node* memo = this->_end;
			this->_end = this->_end->_before;
			if (this->_end != nullptr)
			{
				this->_end->_next = nullptr;
			}
			this->_size = this->_size - 1;
			if (this->_size == 0)
			{
				this->_front = nullptr;
			}
			delete (memo);
			memo = nullptr;
		}
		return (num);
	}

	int size() const
	{
		return (this->_size);
	}

	int empty() const
	{
		if (this->_size == 0)
		{
			return (1);
		}
		return (0);
	}

	int front() const
	{
		if (this->empty() == 1)
		{
			return (-1);
		}
		return (this->_front->_num);
	}

	int end() const
	{
		if (this->empty() == 1)
		{
			return (-1);
		}
		return (this->_end->_num);
	}

private:
	node* _front = nullptr;
	node* _end = nullptr;
	int _size = 0;

private:
	node* newNode(int num)
	{
		node* new_node = new node();
		new_node->_num = num;
		new_node->_before = nullptr;
		new_node->_next = nullptr;
		return (new_node);
	}
};

int b28279()
{
	cin.tie(0);
	cin.sync_with_stdio(false);
	ios_base::sync_with_stdio(false);

	MyDeque deq;
	int N = 0;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int chose = 0;
		cin >> chose;
		int num = 0;
		switch (chose)
		{
		case 1:
			cin >> num;
			deq.push_front(num);
			break;
		case 2:
			cin >> num;
			deq.push_back(num);
			break;
		case 3:
			num = deq.pop_front();
			//cout << "\noutput : ";
			cout << num << '\n';
			break;
		case 4:
			num = deq.pop_back();
			//cout << "\noutput : ";
			cout << num << '\n';
			break;
		case 5:
			//cout << "\noutput : ";
			cout << deq.size() << '\n';
			break;
		case 6:
			//cout << "\noutput : ";
			cout << deq.empty() << '\n';
			break;
		case 7:
			//cout << "\noutput : ";
			cout << deq.front() << '\n';
			break;
		case 8:
			//cout << "\noutput : ";
			cout << deq.end() << '\n';
		}
	}
	return (0);
}