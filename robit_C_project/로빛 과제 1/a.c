#include <stdio.h>
int main()
{
	float avr = 0, max = 0, min = 0, n = 0;
	printf("1번째 실수를 입력하시오:");
	scanf_s("%f", &n);
	max = n;
	min = n;
	avr = avr + n;
	//첫번째 실수 입력이유는 최솟값 0이 되는것을 방지

	for (int i = 2; i < 6; i++)
	{
		printf("%d번째 실수를 입력하시오:", i);
		scanf_s("%f", &n);

		avr = avr + n;
		if (max < n) //최댓값
		{
			max = n;
		}
		if (min > n)//최솟값
		{
			min = n;
		}
	}

	printf("평균:%f", avr / 5);
	printf("최댓값:%f", max);
	printf("최솟값:%f", min);
}