#include <stdio.h>
int main()
{
	float avr = 0, max = 0, min = 0, n = 0;
	printf("1��° �Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f", &n);
	max = n;
	min = n;
	avr = avr + n;
	//ù��° �Ǽ� �Է������� �ּڰ� 0�� �Ǵ°��� ����

	for (int i = 2; i < 6; i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ�:", i);
		scanf_s("%f", &n);

		avr = avr + n;
		if (max < n) //�ִ�
		{
			max = n;
		}
		if (min > n)//�ּڰ�
		{
			min = n;
		}
	}

	printf("���:%f", avr / 5);
	printf("�ִ�:%f", max);
	printf("�ּڰ�:%f", min);
}