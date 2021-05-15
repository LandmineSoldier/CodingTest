/*
 * 4344 : 평균은 넘겠지
 * 대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
 */
#include <stdio.h>
int main(void)
{
	int C;
	int N;
	double score[1000];
	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		double totalScore = 0;
		int stuCount = 0;
		scanf("%d", &N);
		for (int j = 0; j < N; j++)
		{
			scanf("%lf", &score[j]);
			totalScore += score[j];
		}
		for (int j = 0; j < N; j++)
		{
			if (score[j] > totalScore / N)
				stuCount++;
		}
		printf("%.3lf%%\n", (double)stuCount * 100 / (double)N);
	}
}
