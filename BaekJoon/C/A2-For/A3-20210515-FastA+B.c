/*
 * 15552 : 빠른 A+B
 * 본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int A, B, time;
    int* calculateResults;
    scanf("%d", &time);
    calculateResults = malloc(sizeof(int) * time);
    for (int count = 0; count < time; count++)
    {
        scanf("%d %d", &A, &B);
        calculateResults[count] = A + B;
    }
    for (int count = 0; count < time; count++)
    {
        printf("%d\n", calculateResults[count]);
    }
    free(calculateResults);
}
// A+B - 3 과 똑같은 코드입니다.
