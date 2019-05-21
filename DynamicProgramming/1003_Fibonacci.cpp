#include <iostream>
using namespace std;

//problem from https://www.acmicpc.net/problem/1003

int memo[41] = { 0 };
int fibonacci(int n)
{
	if (memo[n] > 0) return memo[n];
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	return memo[n] = fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int num;
		cin >> num;
		if (num == 0)
			cout << "1 0\n";
		else
		{
			cout << fibonacci(num - 1) << " " << fibonacci(num) << endl;
		}
	}

	return 0;
}
