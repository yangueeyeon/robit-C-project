#include <stdio.h>
int main()
{
    int n;
    printf("���� �Է��ϼ���:");
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
            if (k == 0 || k == 2 * i-2 ) // �� ���� ��
                printf("*");
            else    //������ ����
                printf(" ");
            k++;
            ;
        }
        k = 0;
        printf("\n");
    }
    //�� �ؿ� ��
    for (i = 1; i <= 2 * n - 1; i++) 
    {
        printf("*");
    }

    printf("\n");
    return 0;
}