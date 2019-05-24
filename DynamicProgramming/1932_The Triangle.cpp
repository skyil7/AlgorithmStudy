#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i=a;i<=b;i++)
#define MAX(a,b) a>b?a:b
using namespace std;

//problem from https://www.acmicpc.net/problem/1932

int main()
{
	
	int n, max=0;
	int pyramid[501][501] = { 0 };

	cin >> n;
	
	FOR(1, n, i)
	{
		FOR(1, i, j)
		{
			cin >> pyramid[i][j];
		}
	}

	FOR(2, n, i)
	{
		FOR(1, i, j)
		{
			pyramid[i][j] += MAX(pyramid[i - 1][j], pyramid[i - 1][j - 1]);
		}
	}

	FOR(1, n, i)
	{
		max = MAX(max, pyramid[n][i]);
	}

	cout << max;
	
	return 0;
}