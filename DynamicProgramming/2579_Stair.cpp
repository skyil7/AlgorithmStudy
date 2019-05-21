#include <iostream>
#include <algorithm>
using namespace std;

//problem from https://www.acmicpc.net/problem/2579

int main()
{
	int n;
	int score[301] = { 0 };
	int maxScore[301] = { 0 };

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> score[i];
	}

	maxScore[1] = score[1];
	maxScore[2] = max(score[1] + score[2], score[1]);
	maxScore[3] = max(score[3] + score[2], score[3] + score[1]);

	for (int i = 3; i <= n; i++)
	{
		maxScore[i] = max(score[i] + score[i - 1] + maxScore[i - 3], score[i] + maxScore[i - 2]);
	}

	cout << maxScore[n];
	return 0;
}
