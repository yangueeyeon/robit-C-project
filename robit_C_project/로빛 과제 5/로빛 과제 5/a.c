#include <stdio.h>
void main()
{
    int n = 0;
    printf("숫자를 입력하시오:");
    scanf_s("%d",&n);
    
    int i = 0, j = 0, k = 0, l = 0, m = 0;

    //위쪽 부분
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("*");
        for (k = 1; k < n - i; k++)
            printf(" ");
        for (l = 1; l < n - i; l++)
            printf(" ");
        for (m = 0; m <= i; m++)
            printf("*");
        printf("\n");
    }
    //아래 부분
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            printf("*");
        for (k = 1; k <= i; k++)
            printf(" ");
        for (l = 1; l <= i; l++)
            printf(" ");
        for (m = 0; m < n - i; m++)
            printf("*");

        printf("\n");
    }
}