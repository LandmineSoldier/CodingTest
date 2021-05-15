/*
 * 10951 : A+B - 4
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 */
#include <stdio.h>
int main(void)
{
    int A, B;
    while (scanf("%d %d", &A, &B) != EOF) //End Of File의 약자. scanf를 통해 받은 값이 파일의 끝이 아닌동안 while을 돌린다.
    {
        printf("%d\n", A+B);
    }
}
