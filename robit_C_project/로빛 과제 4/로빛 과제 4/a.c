#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float num1, num2, result = 1;
    char i;

    printf("input: ");
    scanf("%f %c %f",&num1, &i, &num2);
    if (i == '+') //µ¡¼À
    {
        result = num1 + num2;
        printf("%f %c %f = %f", num1, i, num2, result);
    }
    else if (i == '-')//»¬¼À
    {
        result = num1 - num2;
        printf("%f %c %f = %f", num1, i, num2, result);
    }
    else if (i == '*')//°ö¼À
    {
        result = num1 * num2;
        printf("%f %c %f = %f", num1, i, num2, result);
    }
    else if (i == '/')//³ª´©±â
    {
        result = num1 / num2;
        printf("%f %c %f = %f", num1, i, num2, result);
    }
    else if (i == '^')//°ÅµìÁ¦°ö
    {
        for (int i = 1; i <= num2; i++)
        {
            result = result * num1;
        }
        printf("%f %c %f = %f", num1, i, num2, result);
    }

}