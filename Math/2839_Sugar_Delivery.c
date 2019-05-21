#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

//problem from https://www.acmicpc.net/problem/2839

int main() {
	int l;
	int o = 0, s = 0;

	scanf("%d", &l);
	
	while (l > 0)
	{
		if (l < 3)
			break;
		if (l % 5 != 0 && l % 3 == 0&&l/3<5)
		{
			o += l / 3;
			l = 0;
			break;
		}
		if (l >= 5)
		{
			o++;
			l -= 5;
		}
		else if (l >= 3)
		{
			s++;
			l -= 3;
		}
	}

	if (l == 0)
		printf("%d", o + s);
	else
		printf("%d",-1);

}