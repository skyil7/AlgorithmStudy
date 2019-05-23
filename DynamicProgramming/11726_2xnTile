#include <iostream>
#include <algorithm>
using namespace std;

//problem from https://www.acmicpc.net/problem/11726

int main()
{
	int n;
	int memo[1003];
	memo[1] = 1;
	memo[2] = 2;

	cin >> n;

	for (int i = 3; i <= n; i++)
	{
		memo[i] = (memo[i - 1] + memo[i - 2]) % 10007;
	}
	
	cout << memo[n];

	return 0;
}