#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/2631

int main()
{
	int n, max = 0;
	int ar[201];
	int dp[201] = {1};

	cin >> n;
	FOR(0, n, i)
		cin >> ar[i];

	FOR(1, n, i)
	{
		dp[i] = 1;
		FOR(0, i, j)
			if (ar[i] > ar[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		if (max < dp[i])
			max = dp[i];
	}

	cout << (n - max) << endl;

	return 0;
}
