#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/1002

int main()
{
	int n,tmp;
	int sum = 0, sub = 0, d;
	int x1, x2, y1, y2, r1, r2;
	int m1, m2;

	cin >> n;

	FOR(0, n, i)
	{
		cin >> x1;
		cin >> y1;
		cin >> r1;
		cin >> x2;
		cin >> y2;
		cin >> r2;
		if (r1 > r2)
		{
			tmp = r1;
			r1 = r2;
			r2 = tmp;
		}

		sum = r1 + r2;
		sum *= sum;
		sub = r1 - r2;
		sub *= sub;

		m1 = x1 - x2;
		m2 = y1 - y2;
		d = m1 * m1 + m2 * m2;

		if (d < sum && d > sub)
		{
			cout << 2;
		}
		else if (d == sum || (d == sub && d != 0))
		{
			cout << 1;
		}
		else if (d < sub || d > sum) 
		{
			cout << 0;
		}
		else if (d == 0) {
			if (r1 == r2)
				cout << -1;
			else
				cout << 0;
		}
		cout << endl;
	}

	return 0;
}