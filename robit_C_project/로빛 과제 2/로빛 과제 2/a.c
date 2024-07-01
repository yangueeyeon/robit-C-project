#include <stdio.h>
int main()
{
	int n = 0, num1 = 0, num2 = 1, num = 0;
	printf("숫자를 입력하시오:");
	scanf_s("%d", &n);
	if (n == 1) //피보나치 수열에서 2이상의 입력해야 하므로  입력값이1,2 일 때 예외를 조건문으로 작성
	{
		printf("%d", num1);
	}
	else if (n == 2)
	{
		printf("%d", num1 + num2);
	}
	else
	{
		for (int i = 2; i < n; i++)//피보나치 수열
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
		}
		printf("%d", num);
	}

}