#include <iostream>
#define FOR(a,b,i) for(int i = a;i < b;i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 1000000;
	char ch[1000000][300];
	char tar[200000];

	long long cnt = 0;

	cin >> n;
	FOR(0, n, i)
	{
		cin >> ch[i];
	}
	cin >> tar;

	return 0;
}