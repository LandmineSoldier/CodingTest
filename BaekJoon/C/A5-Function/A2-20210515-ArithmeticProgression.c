/*
 * 1065 : 한수
 * 어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
 * N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
 */
#include <stdio.h>
int han(int max)
{
    int cnt = 99;
    if (max > 99)
    {
        for (int num = 100; num <= max; num++)
        {
            if (((num / 100) - ((num % 100) / 10)) == (((num % 100) / 10) - ((num % 100) % 10)))
                cnt++;
        }
        return cnt;
    }
    else
        return max;
}
int main(void)
{
    int max;
    scanf("%d", &max);
    printf("%d", han(max));
}
