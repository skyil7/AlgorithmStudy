#include <iostream>
#include <algorithm>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/1672

char decode(char a, char b)
{
	if (a == 'A')
	{
		if (b == 'A')
			return 'A';
		if (b == 'G')
			return 'C';
		if (b == 'C')
			return 'A';
		if (b == 'T')
			return 'G';
	}
	if (a == 'G')
	{
		if (b == 'A')
			return 'C';
		if (b == 'G')
			return 'G';
		if (b == 'C')
			return 'T';
		if (b == 'T')
			return 'A';
	}
	if (a == 'C')
	{
		if (b == 'A')
			return 'A';
		if (b == 'G')
			return 'T';
		if (b == 'C')
			return 'C';
		if (b == 'T')
			return 'G';
	}
	if (a == 'T')
		if (b == 'A')
			return 'G';
		if (b == 'G')
			return 'A';
		if (b == 'C')
			return 'G';
		if (b == 'T')
			return 'T';
}

int main()
{
	int n;
	char dna[1000001];

	cin >> n;
	FOR(0, n, i)
		cin >> dna[i];

	while (n > 1)
	{
		dna[n - 2] = decode(dna[n - 2], dna[n - 1]);
		n--;
	}

	cout << dna[0];

	return 0;
}
