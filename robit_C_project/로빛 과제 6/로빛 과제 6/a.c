#include <stdio.h>
int main()
{
    int n;
    printf("값을 입력하세요:");
    scanf_s("%d", &n);
    int i, j, k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++) 
        {
            printf(" ");
        }
        while (k != (2 * i)) 
        {
            if (k == 0 || k == 2 * i-2 ) // 양 끝점 별
                printf("*");
            else    //나머지 공백
                printf(" ");
            k++;
            ;
        }
        k = 0;
        printf("\n");
    }
    //맨 밑에 별
    for (i = 1; i <= 2 * n - 1; i++) 
    {
        printf("*");
    }

    printf("\n");
    return 0;
}