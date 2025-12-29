#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

double getGrade(string grade)
{
	double result;

	if (grade[0] == 'A')
		result = 4.0;
	else if (grade[0] == 'B')
		result = 3.0;
	else if (grade[0] == 'C')
		result = 2.0;
	else if (grade[0] == 'D')
		result = 1.0;
	else if (grade[0] == 'F')
		result = 0.0;

	if (grade[1] == '+')
		result += 0.3;
	else if (grade[1] == '-')
		result -= 0.3;

	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int credit_sum = 0, cal;
	double grade_sum = 0.0, total;

	for (int i = 0; i < n; i++)
	{
		string name, grade;
		int credit;
		cin >> name >> credit >> grade;

		credit_sum += credit;
		grade_sum += credit * getGrade(grade);
	}

	total = grade_sum / credit_sum + 0.0000001;

	cout << fixed;
	cout.precision(2);
	cout << total;

	return 0;
}