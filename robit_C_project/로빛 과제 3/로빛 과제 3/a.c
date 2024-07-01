#include <stdio.h>
int main()
{
	int i = 0;
	printf("³âµµ¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
	scanf_s("%d", &i);
	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
	{
		printf("À±³â");
	}
	else
	{
		printf("À±³â ¾Æ´Ô");
	}
}