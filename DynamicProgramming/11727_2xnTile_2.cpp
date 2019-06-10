#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/11727

int main()
{
	int n;
	int dp[1001] = { 0 };

	dp[1] = 1;
	dp[2] = 3;

	cin >> n;

	FOR(3, n + 1, i)
	{
		dp[i] = (dp[i - 1] + dp[i - 2] * 2)%10007;
	}

	cout << dp[n];

	return 0;
}
