/*
 * 2438 : 별 찍기 - 1
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 */
int main(void)
{
    int maxLine;
    scanf("%d", &maxLine);
    for (int line = 1; line <= maxLine; line++)
    {
        for (int times = 1; times <= line; times++)
        {
            printf("*");
        }
        puts("");
    }
}
//puts는 출력문장 + \n 으로 출력됩니다.
