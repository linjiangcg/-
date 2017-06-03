#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	int sum = 0;

	for (; a <= 4000000 && b <= 4000000;)
	{
		 a = a + b;
		 
		if (a % 2 == 0)
		{
			sum += a;
		}
		b = b + a;
		if (b % 2 == 0)
		{
			sum += b;
		}
	}

	printf("%d", sum);
	printf("\n");
	return 0;
}