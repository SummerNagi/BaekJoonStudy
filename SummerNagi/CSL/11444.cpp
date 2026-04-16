#include <iostream>
#include <vector>

using namespace std;

struct Matrix
{
	Matrix()
		: a(0), b(0), c(0), d(0)
	{
	}
	Matrix(int inA, int inB, int inC, int inD)
		: a(inA), b(inB), c(inC), d(inD)
	{
	}
	long long a, b, c, d;
	static const long long MOD = 1'000'000'007;
};

Matrix Multiply(const Matrix& x, const Matrix& y)
{
	Matrix result;

	result.a = (x.a * y.a + x.b * y.c) % Matrix::MOD;
	result.b = (x.a * y.b + x.b * y.d) % Matrix::MOD;
	result.c = (x.c * y.a + x.d * y.c) % Matrix::MOD;
	result.d = (x.c * y.b + x.d * y.d) % Matrix::MOD;

	return (result);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n = 0;
	cin >> n;

	Matrix answer(1, 0, 0, 1);
	Matrix base(1, 1, 1, 0);

	while (n > 0)
	{
		if (n & 1)
		{
			answer = Multiply(answer, base);
		}

		base = Multiply(base, base);
		n = n / 2;
	}

	cout << answer.b << '\n';
	return (0);
}
