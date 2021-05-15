/*
 * 2562 : 최댓값
 * 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
 * 예를 들어, 서로 다른 9개의 자연수
 * 3, 29, 38, 12, 57, 74, 40, 85, 61
 * 이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
 * 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100 보다 작다.
 */
#include <stdio.h>
int main(void)
{
    int arr[9], max = 0, pos;
    for (int cnt = 0; cnt < 9; cnt++)
    {
        scanf("%d", &arr[cnt]);
        if (max < arr[cnt])
        {
            max = arr[cnt];
            pos = cnt + 1;
        }
    }
    printf("%d\n%d", max, pos);
}
// 아래는 배열을 쓰지 않은 코드
//#include <stdio.h>
//int main(void)
//{
//    int max = 0, pos;
//    for (int cnt = 0; cnt < 9; cnt++)
//    {
//        int temp;
//        scanf("%d", &temp);
//        if (max < temp)
//        {
//            max = temp;
//            pos = cnt + 1;
//        }
//    }
//    printf("%d\n%d", max, pos);
//}
