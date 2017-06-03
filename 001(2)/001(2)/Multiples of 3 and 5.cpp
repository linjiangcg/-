#include <stdio.h>

int main()
{
	int i = 1, a = 0;
	int j = 1, b = 0;
	int k = 1, c = 0;
	int sum;
	
	for (; i <= 333; i++)
	{
		a += i;
	}
	for (; j <= 199; j++)
	{
		b += j;
	}
	for (; k <= 66; k++)
	{
		c += k;
	}

	sum = 3 * a + 5 * b - 15 * c;
	printf("%d", sum);
	printf("\n");
	return 0;
}
