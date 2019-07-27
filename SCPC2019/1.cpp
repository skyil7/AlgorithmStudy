/*
SCPC 2019 Round 1
1:오르락 내리락
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int dp[1000001];
int func(int n)
{
	if (dp[n] || n == 1)
		return dp[n];
	if (n % 2 == 0)
		return dp[n] = func(n / 2) + 1;
	return dp[n] = func(n + 1) + 1;
}

int Answer;

int main(int argc, char** argv)
{
	cin.sync_with_stdio(false);
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */

	 // freopen("input.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		dp[2] = 1;
		dp[3] = 3;
		dp[4] = 2;
		dp[5] = 5;

		int n1, n2;
		cin >> n1 >> n2;

		for (int i = n2; i >= n1; i--)
			Answer += func(i);

		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		printf("Case #%d\n", test_case + 1);
		printf("%d\n", Answer);
	}

	return 0;//Your program should return 0 on normal termination.
}