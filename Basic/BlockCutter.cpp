#include <iostream>
#include <string>
#define FOR(a,b,i) for(int i=a;i<=b;i++)
using namespace std;

/*
	'('는 블록을 연다
	')'는 블록을 닫는다
	연속된 "()"는 레이저로, 현재 열려있는 블록들을 두 조각으로 자른다.

	'('와')'로 이뤄진 문자열을 *이 입력될 때까지 입력받고, 블록의 조각이 몇 개인지 출력하시오. */

int main()
{
	int idx = 0, idx2 = 0;
	char ch[101],c;
	char dp[101];
	int sum = 0, ocnt=0;

	while (true)
	{
		cin >> c;
		if (c == '*')
			break;

		ch[idx] = c;
		idx++;
	}

	FOR(0, idx-1, i)
	{
		if (ch[i] == '(' && ch[i + 1] == ')')
		{
			i++;
			dp[idx2] = 'l';
		}
		else if (ch[i] == '(')
		{
			dp[idx2] = 'o';
		}
		else
		{
			dp[idx2] = 'c';
		}
		idx2++;
	}

	FOR(0, idx2-1, i)
	{
		if (dp[i] == 'o')
		{
			ocnt++;
			sum++;
		}
		if (dp[i] == 'c')
		{
			ocnt--;
		}
		if (dp[i] == 'l')
		{
			sum += ocnt;
		}
	}

	cout << sum;

	return 0;
}