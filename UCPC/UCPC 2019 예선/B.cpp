#include <iostream>
#define FOR(a,b,i) for(int i = a;i < b;i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char ch[101][101];//[세로][가로]
	char temp;
	int xn, yn;
	cin >> yn;
	cin >> xn;

	FOR(0, yn, y)
	{
		FOR(0, xn, x)
		{
			cin >> temp;
			if (temp == 45)
				ch[y][x] = 124;
			else if (temp == 124)
				ch[y][x] = 45;
			else if (temp == 47)
				ch[y][x] = 92;
			else if (temp == 92)
				ch[y][x] = 47;
			else if (temp == 94)
				ch[y][x] = 60;
			else if (temp == 60)
				ch[y][x] = 118;
			else if (temp == 118)
				ch[y][x] = 62;
			else if (temp == 62)
				ch[y][x] = 94;
			else
				ch[y][x] = temp;
		}
	}
	for(int y=xn-1;y>=0;y--)
	{
		FOR(0, yn, x)
		{
			cout << ch[x][y];
		}
		cout << '\n';
	}


	return 0;
}