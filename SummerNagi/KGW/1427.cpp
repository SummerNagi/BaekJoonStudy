#include <iostream>
#include <vector>
#include <string>

using namespace std;


void SelectionSort(string& str) {
	int n = str.size();
	for (int i = 0; i < n - 1; ++i) {
		int maxIndex = i;
		for (int j = i + 1; j < n; ++j) {
			if (str[j] > str[maxIndex]) {
				maxIndex = j;
			}
		}
		if (i != maxIndex) {
			char temp = str[i];
			str[i] = str[maxIndex];
			str[maxIndex] = temp;
		}
	}
}

int a1427()
{
	ios::sync_with_stdio;
	//cin.tie(false);
	//cout.tie(false);

	
	int N ;
	cin >> N;

	string str = to_string(N) ;

	SelectionSort(str);

	cout << str << "\n";

	return 0;


}