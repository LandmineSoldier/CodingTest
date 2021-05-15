/*
 * 11021 : A+B - 7
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
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
        printf("Case #%d: %d\n", count+1,calculateResults[count]);
    }
    free(calculateResults);
}
