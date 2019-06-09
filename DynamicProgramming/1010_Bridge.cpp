#include <iostream>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/1010

int dp[31][31] = { 0 };
int brid(int n, int m)
{
	if (n == m || n == 0)
		return 1;
	if (dp[n][m])
		return dp[n][m];
	return dp[n][m] = brid(n - 1, m - 1) + brid(n, m-1);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		cout << brid(n, m) << endl;
	}
}