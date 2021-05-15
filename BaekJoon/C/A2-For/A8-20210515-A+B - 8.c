/*
 * 11022 : A+B - 8
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int A, B, time;
    int *AList, *BList;
    scanf("%d", &time);
    AList = malloc(sizeof(int) * time);
    BList = malloc(sizeof(int) * time);
    for (int count = 0; count < time; count++)
    {
        scanf("%d %d", &AList[count], &BList[count]);
    }
    for (int count = 0; count < time; count++)
    {
        printf("Case #%d: %d + %d = %d\n", count + 1, AList[count], BList[count], AList[count] + BList[count]);
    }
    free(AList);
    free(BList);
}
