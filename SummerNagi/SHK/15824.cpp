#include <iostream>
#include <vector>
#include <algorithm>

#define mod 1000000007

using namespace std;

vector<int> food;

unsigned long long myPow(int n)
{
	if (n == 0)
	{
		return 1;
	}

	unsigned long long temp = (myPow(n / 2));

	unsigned long long result = (temp * temp) % mod;

	if (n % 2 == 1)
	{
		result = (result * 2) % mod;
	}

	return result;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	if (N == 1)
	{
		cout << 0;
		return 0;
	}

	food.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> food[i];
	}

	sort(food.begin(), food.end());

	// �ִ밪�� K���ϴ� ������ �� 2^N-1?
	// A = �ִ� - �ּ� �� ����, B = ������ ���� / (A * B) % mod = ( A % mod * B % mod ) % mod
	unsigned long long answer = 0;

	// A = (������ �ִ밪���� ����) - (������ �ּҰ����� ����)
	// (������ �ִ밪���� ����) = ��� * ��Һ��� �ִ밪�� �Ǵ� ������ ��
	// (������ �ּҰ����� ����) = ��� * ��Һ��� �ּҰ��� �Ǵ� ������ ��

	// i�� �ִ���ϴ� ������ ��
	// ���� ���� ���� �ִ���ϴ� ������ ����

	unsigned long long temp1 = 0;

	unsigned long long  count = myPow(N - 1);

	for (int i = 0; i < N; i++)
	{
		unsigned long long max_count = myPow(i);

		// food[i]�� �ּҰ����� �⿩�ϴ� Ƚ��: 2^(N-1-i)
		unsigned long long min_count = myPow(N - 1 - i);

		// ���(Factor) ���: (�ִ� Ƚ�� - �ּ� Ƚ��) % mod
		// ���� ����� ������ ���� �ʵ��� mod�� ���մϴ�: (A - B + K) % K
		long long factor = (max_count - min_count + mod) % mod;

		// ���� �� ���: (food[i] * factor) % mod
		// food[i]�� int������, ���� �����÷ο� ������ ���� long long���� ����� �� ��ȯ �� % mod ����
		unsigned long long term = ((unsigned long long)food[i] * factor) % mod;

		// ���� �ջ�: ���� �� % mod ����
		answer = (answer + term) % mod;
	}

	cout << (temp1 - temp2) % mod;
}