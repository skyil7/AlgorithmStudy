#include <iostream>
#define FOR(a,b,i) for(int i=a;i<=b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/2167

int main()
{
	
	int n, m, k;
	int i, j, x, y, sum = 0;
	int arr[301][301];

	cin >> n;
	cin >> m;

	FOR(1, n, i)
	{
		FOR(1, m, j)
		{
			cin >> arr[i][j];
		}
	}

	cin >> k;

	FOR(1, k, t)
	{
		sum = 0;
		cin >> i;
		cin >> j;
		cin >> x;
		cin >> y;

		FOR(i, x, p)
		{
			FOR(j, y, o)
			{
				sum += arr[p][o];
			}
		}

		cout << sum << endl;
	}

	return 0;
}