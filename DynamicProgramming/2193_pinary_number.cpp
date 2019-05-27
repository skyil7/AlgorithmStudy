#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/2193

int64_t memo[91];
int64_t fibo(int n)
{
	if (n <= 1)
		return n;
	if (memo[n] != 0)
		return memo[n];
	return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	cin >> n;

	//0 0
	//1 1
	//2 10
	//3 101 100
	//4 1010 1001 1000
	//5 10101 10100 10000 10010 10001
	//6 101010 101000 101001 100000 100100 100101 100010 100001

	cout << fibo(n);

	return 0;
}