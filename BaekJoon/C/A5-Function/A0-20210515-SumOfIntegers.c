/*
 * 15596 : 정수 N개의 합
 * 정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
 */
long long sum(int* a, int n)
{
	long long total = 0;
	for (int i = 0; i < n; i++)
	{
		total += a[i];
	}
	return total;
}
