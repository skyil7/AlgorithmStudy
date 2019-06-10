#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/2156

int main()
{
	int n, wine[10001] = { 0 }, maxWine[10001] = { 0 };

	cin >> n;

	FOR(1, n + 1, i)
		cin >> wine[i];

	maxWine[1] = wine[1];
	maxWine[2] = wine[1] + wine[2];

	FOR(3, n + 1, i)
	{
		maxWine[i] = wine[i] + max(wine[i - 1] + maxWine[i - 3], maxWine[i - 2]);
		maxWine[i] = max(maxWine[i], maxWine[i - 1]);
	}

	cout << max(maxWine[n], maxWine[n - 1]);

	return 0;
}
