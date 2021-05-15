/*
 * 2439 : 별 찍기 - 2
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 * 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
 */
#include <stdio.h>
int main(void)
{
    int maxLine;
    scanf("%d", &maxLine);
    for (int line = 0; line < maxLine; line++)
    {
        for (int times = 1; times <= maxLine; times++)
        {
            times >= maxLine - line ? printf("*") : printf(" ");
        }
        puts("");
    }
}
