/*
 * 11720 : 숫자의 합
 * N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int max, cnt = 0;
    char* num;
    scanf("%d", &max);
    num = malloc(sizeof(char) * (max + 1));
    scanf("%s", num);
    for (int i = 0; i < max; i++)
    {
        cnt += num[i] - 48;
    }
    free(num);
    printf("%d", cnt);
}
