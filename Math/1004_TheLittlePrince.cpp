#include <iostream>
#define FOR(a,b) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/1004

int main()
{
	int cases;//How many test cases?

	cin >> cases;

	FOR(0, cases)
	{
		int x1, y1, x2, y2;//coordinates of start point and destination
		int cnt = 0, cosmos;
		cin >> x1 >> y1 >> x2 >> y2;

		cin >> cosmos;//number of existing cosmos on map

		FOR(0, cosmos)
		{
			int cx, cy, cr;//coordinate of cosmos and it's radius
			int d1,d2;//distance
			bool b1, b2;//if start point and destination are in same cosmos, ship doesn't need to escape the cosmos
			cin >> cx >> cy >> cr;

			int dx1, dy1, dx2, dy2;
			dx1 = x1 - cx;
			dy1 = y1 - cy;
			dx2 = x2 - cx;
			dy2 = y2 - cy;
			cr *= cr;
			d1 = dx1 * dx1 + dy1 * dy1;
			d2 = dx2 * dx2 + dy2 * dy2;

			b1 = cr > d1 ? true : false;//start point in this cosmos?
			b2 = cr > d2 ? true : false;//destination in this cosmos?

			if (b1 != b2)
				cnt++;
		}
		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
	
}