#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Student
{
	string name;
	int d, m, y;
};

bool cmp(Student& x, Student& y)
{
	if (x.y != y.y)
		return x.y > y.y;
	if (x.m != y.m)
		return x.m > y.m;

	return x.d > y.d;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<Student> students;
	for (int i=0; i<n; i++)
	{
		Student s;
		cin >> s.name >> s.d >> s.m >> s.y;

		students.push_back(s);
	}

	sort(students.begin(), students.end(), cmp);

	cout << students[0].name << '\n' << students[n - 1].name;

	return 0;
}
