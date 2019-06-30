#include <iostream>
#define FOR(a,b,i) for(int i = a;i < b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/15896

int a[1000000], b[1000000];
int bitwise(int x_, int y_)
{
	int x = x_, y = y_;
	int res = 0;
	int n = 268435456;
	int f = 0;
	if (x % 2 == 1)
	{
		x--;
		f = 1;
	}
	if (y % 2 == 1)
	{
		y--;
		if (f == 1)
		{
			res++;
		}
	}

	while (x > 0 && y > 0)
	{
		f = 0;
		if (x / n == 1)
		{
			x -= n;
			f = 1;
		}
		if (y / n == 1)
		{
			y -= n;
			if (f == 1)
				res += n;
		}
		n /= 2;
	}
	return res;
}

int main()
{
	
	int n;
	cin >> n;

	FOR(0, n, i)
		cin >> a[i];
	FOR(0, n, i)
		cin >> b[i];

	int sum = 0;
	int bit = a[0]+b[0];
	FOR(0, n, i)
	{
		FOR(0, n, j)
		{
			sum += bitwise(a[i], b[j]) % 1999;
			bit = bitwise(bit, a[i] + b[j]);
		}
	}

	cout << sum << ' ' << bit;

	return 0;
}