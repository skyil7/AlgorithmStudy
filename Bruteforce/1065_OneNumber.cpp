#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/1065

int main()
{
	int n;
	cin >> n;

	if (n < 100)
		cout << n;
	else
	{
		int cnt = 99;
		FOR(100, n+1, i)
		{
			int hun = i / 100;
			int te = (i / 10) % 10;
			int o = i % 10;

			if ((te - o) == (hun - te))
				cnt++;
		}
		cout << cnt;
	}

	return 0;
}