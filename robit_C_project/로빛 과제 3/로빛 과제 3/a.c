#include <stdio.h>
int main()
{
	int i = 0;
	printf("�⵵�� �Է��Ͻÿ�:");
	scanf_s("%d", &i);
	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
	{
		printf("����");
	}
	else
	{
		printf("���� �ƴ�");
	}
}