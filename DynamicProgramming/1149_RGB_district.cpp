#include <iostream>
#include <algorithm>
using namespace std;

//problem from https://www.acmicpc.net/problem/1149

int main()
{
	int n;
	int house[1001][3];
	house[0][0] = house[0][1] = house[0][2] = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> house[i][0];
		cin >> house[i][1];
		cin >> house[i][2];

		house[i][0] = house[i][0] + min(house[i - 1][1], house[i - 1][2]);
		house[i][1] = house[i][1] + min(house[i - 1][0], house[i - 1][2]);
		house[i][2] = house[i][2] + min(house[i - 1][0], house[i - 1][1]);
	}

	cout << min(min(house[n][0], house[n][1]), house[n][2]);
	return 0;
}
