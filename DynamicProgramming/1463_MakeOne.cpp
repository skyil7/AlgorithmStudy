#include <iostream>
#include <algorithm>
using namespace std;

//problem from https://www.acmicpc.net/problem/1463

int main()
{
	int num;
	int minSolution[1000001];

	cin >> num;

	minSolution[1] = 0;

	for (int i = 2; i <= num; i++)
	{
		minSolution[i] = minSolution[i - 1] + 1;
		if (i % 3 == 0)
		{
			minSolution[i] = min(minSolution[i], minSolution[i / 3] + 1);
		}
		if (i % 2 == 0)
		{
			minSolution[i] = min(minSolution[i], minSolution[i / 2] + 1);
		}
	}

	cout << minSolution[num];

	return 0;
}
