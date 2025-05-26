#include <iostream>

using namespace std;

int checkArr[4];		// 비밀번호 체크 배열
int currentArr[4];		// 현재 상태 배열
int checkSecret = 0;	// 유효 비밀번호 판단 변수

// 새로 들어온 문자 처리
void Add(char c)
{
	switch (c)
	{
		case 'A':
			currentArr[0]++;
			if (currentArr[0] == checkArr[0]) checkSecret++;
			break;
		case 'C':
			currentArr[1]++;
			if (currentArr[1] == checkArr[1]) checkSecret++;
			break;
		case 'G':
			currentArr[2]++;
			if (currentArr[2] == checkArr[2]) checkSecret++;
			break;
		case 'T':
			currentArr[3]++;
			if (currentArr[3] == checkArr[3]) checkSecret++;
			break;
	}
}

// 제거할 문자 처리
void Remove(char c)
{
	switch (c)
	{
		case 'A':
			if (currentArr[0] == checkArr[0]) checkSecret--;
			currentArr[0]--;
			break;
		case 'C':
			if (currentArr[1] == checkArr[1]) checkSecret--;
			currentArr[1]--;
			break;
		case 'G':
			if (currentArr[2] == checkArr[2]) checkSecret--;
			currentArr[2]--;
			break;
		case 'T':
			if (currentArr[3] == checkArr[3]) checkSecret--;
			currentArr[3]--;
			break;
	}
}

// DNA 비밀번호
int main()
{
	int s;			// 문자열 길이
	int p;			// 부분 문자열 길이
	string a;		// 문자열
	int result = 0;

	cin >> s >> p;
	cin >> a;
	
	for (int i = 0; i < 4; ++i)
	{
		cin >> checkArr[i];
		if (checkArr[i] == 0) checkSecret++;
	} 

	// 초기 P 부분 문자열
	for (int i = 0; i < p; ++i)
	{
		Add(a[i]);
	}
	
	// 4개 유효 갯수 모두 충족했을 때
	if(checkSecret == 4) result++;

	// 슬라이딩 윈도우 부분 처리
	for (int i = p; i < s; ++i)
	{
		int j = i - p;
		Add(a[i]);
		Remove(a[j]);

		// 4개 유효 갯수 모두 충족했을 때
		if (checkSecret == 4) result++;
	}

	cout << result;

	return 0;
}
