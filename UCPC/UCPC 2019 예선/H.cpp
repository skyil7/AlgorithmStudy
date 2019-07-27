#include <iostream>
#define FOR(a,b,i) for(int i = a;i < b;i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int sero, garo, k, q;
	int obj[300000][3] = { 3 };//0:x 1:y 2:obj [0:ghost, 1:/ 2:\ else:nothing]
	char tmp;
	int tmpi, sx, sy;
	int cnt = 0, dis = 0, dtm = 0, imsi=1000000, obi=300001;

	cin >> sero >> garo >> k >> q;
	
	FOR(0, k, i)
	{
		cin >> obj[i][0] >> obj[i][1];
		obj[i][0] -= 1;
		obj[i][1] -= 1;
		cin >> tmp;
		if (tmp == '!')
			obj[i][2] = 0;
		else if (tmp == '/')
			obj[i][2] = 1;
		else
			obj[i][2] = 2;
	}

	FOR(0, q, t)
	{
		cin >> tmp;
		cin >> tmpi;
		tmpi--;
		//스타트 지점 set
		if (tmp == 'L')
		{
			sx = -1;
			sy = tmpi;
		}
		else if (tmp == 'R')
		{
			sx = garo;
			sy = tmpi;
		}
		else if (tmp == 'U')
		{
			sx = tmpi;
			sy = -1;
		}
		else
		{
			sx = tmpi;
			sy = sero;
		}
		//계산
		while (true)
		{
			FOR(0, k, i)//오브젝트 서칭
			{
				if (tmp == 'U' && obj[i][0] > sy && obj[i][1] == sx)//아래쪽에 오브젝트 있을 때
				{
					if (imsi > obj[i][0] - sy)//이 오브젝트가 더 가까우면
					{
						imsi = obj[i][0] - sy;
						obi = i;
					}
				}
				else if (tmp == 'D' && obj[i][0] < sy && obj[i][1] == sx)//위쪽에 오브젝트 있을 때
				{
					if (imsi > sy - obj[i][0])//이 오브젝트가 더 가까우면
					{
						imsi = sy - obj[i][0];
						obi = i;
					}
				}
				else if (tmp == 'L' && obj[i][1] > sx && obj[i][0] == sy)//오른쪽에 오브젝트 있을 때
				{
					if (imsi > obj[i][1] - sx)
					{
						imsi = obj[i][1] - sx;
						obi = i;
					}
				}
				else if (tmp == 'R' && obj[i][1] < sx && obj[i][0] == sy)//왼쪽에 오브젝트 있을 때
				{
					if (imsi > sx - obj[i][1])
					{
						imsi = sx - obj[i][1];
						obi = i;
					}
				}
			}//오브젝트 서칭
			if (obi<=300000)//오브젝트 발견
			{
				sx = obj[obi][1];
				sy = obj[obi][0];
				dtm += imsi;//1오차 가능
				imsi = 1000000;
				if (obj[obi][2] == 0)//ghost
				{
					cnt++;
					dis += dtm;
				}
				else if (obj[obi][2] == 1)// /
				{
					if (tmp == 'U')
						tmp = 'R';
					else if (tmp == 'D')
						tmp = 'L';
					else if (tmp == 'L')
						tmp = 'D';
					else if (tmp == 'R')
						tmp = 'U';
				}
				else if (obj[obi][2] == 2)// 
				{
					if (tmp == 'U')
						tmp = 'L';
					else if (tmp == 'D')
						tmp = 'R';
					else if (tmp == 'L')
						tmp = 'U';
					else if (tmp == 'R')
						tmp = 'D';
				}
			}
			else
			{
				break;
			}
			obi = 300001;
		}

		cout << cnt << ' ' << dis << '\n';
		cnt = 0;
		dis = 0;
		dtm = 0;
	}

	return 0;
}