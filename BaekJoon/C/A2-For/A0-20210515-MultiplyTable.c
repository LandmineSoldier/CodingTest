/*
 * 2739 : 구구단
 * N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
 */
#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", N, i, N*i);
    }
}
