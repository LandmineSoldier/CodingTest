/*
 * 1330 : 두 수 비교하기
 * 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
 */

#include <stdio.h>
void result(int A, int B){
    if (A < B)
        printf("<");
    else if (A > B)
        printf(">");
    else if (A == B)
        printf("==");
}
int main(void){
    int A, B;
    scanf("%d %d", &A, &B);
    result(A, B);
}
