#include <stdio.h>
int main()
{
	int n = 0, num1 = 0, num2 = 1, num = 0;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &n);
	if (n == 1) //�Ǻ���ġ �������� 2�̻��� �Է��ؾ� �ϹǷ�  �Է°���1,2 �� �� ���ܸ� ���ǹ����� �ۼ�
	{
		printf("%d", num1);
	}
	else if (n == 2)
	{
		printf("%d", num1 + num2);
	}
	else
	{
		for (int i = 2; i < n; i++)//�Ǻ���ġ ����
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
		}
		printf("%d", num);
	}

}