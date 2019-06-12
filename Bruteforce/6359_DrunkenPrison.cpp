#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/6359

int main()
{
	int T;
	cin >> T;
	FOR(0, T, p)
	{
		int n;
		int s[101] = { 0 };
		int cnt = 0;
		cin >> n;

		FOR(1, n + 1, i)
		{
			for (int j = 1; i * j <= n; j++)
			{
				s[i * j] = s[i * j] == 1 ? 0 : 1;
				if (s[i * j] == 1)
					cnt++;
				else
					cnt--;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
