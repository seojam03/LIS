#include <iostream>
using namespace std;

int datas[7];
int dp[7];

int solution(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (datas[j] < datas[i])
			{
				if (dp[i] < dp[j] + 1)
					dp[i] = dp[j] + 1;
			}
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < dp[i])
			max = dp[i];
	}
	return max;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n = 7;
	datas[0] = 2;
	datas[1] = 4;
	datas[2] = 3;
	datas[3] = 5;
	datas[4] = 1;
	datas[5] = 8;
	datas[6] = 7;

	for (int i = 0; i < n; i++)
		dp[i] = 1;

	cout << solution(n);
}

//실행결과는 4