#include <iostream>
#include <queue>
#define FOR(a,b,i) for(int i = a;i < b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/15903

int main()
{
	int n, m;
	priority_queue<long long> card;

	cin >> n >> m;

	FOR(0, n, i)
	{
		int tmp;
		cin >> tmp;

		card.push(-tmp);
	}

	FOR(0, m, i)
	{
		long long a = -card.top();
		card.pop();
		long long b = -card.top();
		card.pop();

		a += b;
		card.push(-a);
		card.push(-a);
	}

	long long sum = 0;
	while (!card.empty())
	{
		sum -= card.top();
		card.pop();
	}
	

	cout << sum;
	
	return 0;
}