#include <stdio.h>
int main()
{
	int n = 0, r = 0, n1 = 1, n2 = 1, n3 = 1, n4 = 1;
	printf("n��r�� �Է��Ͻÿ�:");
	scanf_s("%d %d", &n, &r);
	//����
	for (int i = n; i >= (n - r + 1); i--)
	{
		n1 = n1 * i;
	}
	printf("���� : %d\n", n1);
	//�ߺ�����
	for (int i = 0; i < r; i++)
	{
		n2 = n * n2;
	}
	printf("�ߺ����� : %d\n", n2);
	//����
	for (int i = 1; i <= r; i++)
	{
		n3 = n3 * i;
	}
	printf("���� : %d\n", n1 / n3);
	//�ߺ�����
	for (int i = n + r -1; i >= n; i--)
	{
		n4 = n4 * i;
	}
	printf("�ߺ����� : %d", n4 / n3);
}

	
	
	