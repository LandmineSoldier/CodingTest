/*
 * 10430 : 나머지
 * (A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
 * (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
 * 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
 */
#include <stdio.h>
int main(void){
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    printf("%d\n%d\n%d\n%d", (A+B)%C, ((A%C)+(B%C))%C, (A*B)%C, ((A%C)*(B%C))%C);
}
