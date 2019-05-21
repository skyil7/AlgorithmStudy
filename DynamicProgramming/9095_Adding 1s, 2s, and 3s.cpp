#include <iostream>
#include <algorithm>
using namespace std;

//problem from https://www.acmicpc.net/problem/9095

int main()
{
	int t, n, cnt = 0;
	int solution[11] = { 0 };

	cin >> t;
	
	solution[1] = 1;
	solution[2] = 2;
	solution[3] = 4;

	for (int T = 0; T < t; T++)
	{
		cin >> n;
		for (int i = 4; i <= n; i++)
		{
			if (solution[i] == 0)
				solution[i] = solution[i - 1] + solution[i - 2] + solution[i - 3];
		}
		cout << solution[n] << endl;
	}

	return 0;
}
