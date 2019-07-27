/*
SCPC 2019 Round 1
2.공 굴리기
*/

#include <iostream>
#include <math.h>

using namespace std;

double Answer;

int main(int argc, char** argv)
{
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

		Answer = 0.0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		double R, S, E, N;
		cin >> R >> S >> E;
		cin >> N;
		Answer = E - S;

		for (int i = 0; i < N; i++)
		{
			double l, r, h;
			cin >> l >> r >> h;
			if (h > 2 * R)
			{
				Answer -= (2 * R);
				Answer += 2 * (h - R);
				Answer += (R * 3.1415926535);
			}
			else
			{
				double sin = (R - h) / R;
				double seta = 0.78539816 -asin(sin);
				double mit = (R * R) - ((R - h) * (R - h));
				Answer += 2 * (R * 6.2831853071) * (seta / 6.2831853071);
				Answer -= 2 * sqrt(mit);
			}
		}
		
		 /////////////////////////////////////////////////////////////////////////////////////////////

		 // Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << fixed;
		cout.precision(6);
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}