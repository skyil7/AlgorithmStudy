#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/9507
//ACM-ICPC 2013 Pacific Northwest Region - G

int64_t memo[67] = { 0 };
int64_t gen(int n)
{
	if (n < 2)
		return 1;
	if (n == 2)
		return 2;
	if (n == 3)
		return 4;
	if (memo[n] != 0)
		return memo[n];
	if (n > 3)
		return memo[n]=gen(n - 1) + gen(n - 2) + gen(n - 3) + gen(n - 4);
}

int main()
{
	int a;
	int t;

	cin >> a;
	FOR(0, a, i)
	{
		cin >> t;

		cout << gen(t) << endl;
	}

	return 0;
}