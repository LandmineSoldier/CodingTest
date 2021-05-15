/*
 * 1095 : A+B - 3
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 *
 * 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
 * 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
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
