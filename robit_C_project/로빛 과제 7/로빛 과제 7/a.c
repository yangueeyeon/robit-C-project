#include <stdio.h>
int main()
{
	int n = 0, r = 0, n1 = 1, n2 = 1, n3 = 1, n4 = 1;
	printf("n과r을 입력하시오:");
	scanf_s("%d %d", &n, &r);
	//순열
	for (int i = n; i >= (n - r + 1); i--)
	{
		n1 = n1 * i;
	}
	printf("순열 : %d\n", n1);
	//중복순열
	for (int i = 0; i < r; i++)
	{
		n2 = n * n2;
	}
	printf("중복순열 : %d\n", n2);
	//조합
	for (int i = 1; i <= r; i++)
	{
		n3 = n3 * i;
	}
	printf("조합 : %d\n", n1 / n3);
	//중복조합
	for (int i = n + r -1; i >= n; i--)
	{
		n4 = n4 * i;
	}
	printf("중복조합 : %d", n4 / n3);
}

	
	
	