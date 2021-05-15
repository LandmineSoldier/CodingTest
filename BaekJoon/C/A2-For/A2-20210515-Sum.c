/*
 * 8393 : 합
 * n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
 */
#include <stdio.h>
int main(void)
{
    int N, result = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        result += i;
    }
    printf("%d", result);
}
