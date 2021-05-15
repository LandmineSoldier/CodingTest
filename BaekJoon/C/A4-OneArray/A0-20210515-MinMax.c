/*
 * 10818 : 최소 최대
 * N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
 */
#include <stdio.h>
int main(void)
{
    int arrMax;
    int min, max, temp;
    scanf("%d", &arrMax);
    if (arrMax > 0)
    {
        scanf("%d", &temp);
        max = min = temp;
    }
    for (int cnt = 1; cnt < arrMax; cnt++)
    {
        scanf("%d", &temp);
        max = max < temp ? temp : max;
        min = min > temp ? temp : min;
    }
    printf("%d %d", min, max);
}
