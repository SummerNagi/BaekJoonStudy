#include <iostream>
#include<string>
#include <vector>

using namespace std;

template<typename T>
class Base {

public:

	Base(T value =0 ) : value(value) {};

	Base operator +(const Base& other)cosnt {
		return Base(this->value + other.value);
	}

	Base operator -(const Base& other)cosnt {
		return Base(this->value - other.value);
	}


private: 
	
	T value;


};

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;

	cin >> N;

	vector<string> token;

	string temp;

	for (const auto ch : N)
	{
		if(ch == '+' || ch == '-')
	}



}