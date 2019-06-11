#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/11048

int main()
{
	int n, m;
	int maze[1001][1001] = { 0 };
	int sco[1001][1001] = { 0 };

	cin >> n >> m;

	FOR(1, n + 1, i)
		FOR(1, m + 1, j)
			cin >> maze[i][j];

	sco[1][1] = maze[1][1];

	FOR(1, n + 1, x)
		FOR(1, m + 1, y)
		sco[x][y] = maze[x][y]+max(max(sco[x - 1][y], sco[x][y - 1]),sco[x - 1][y - 1]);

	cout << sco[n][m];

	return 0;
}
