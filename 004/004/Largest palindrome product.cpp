#include <stdio.h>

int main()
{
	int a = 999;
	int c;
	long int max = 0;

	for (; a >= 100; a--)
	{
		for (int b = 999; b >= 100; b--)
		{
			c = a * b;
			int d, k;
			d = c;
			k = 0;
			while (d > 0)
			{
				k = k * 10 + d % 10;
				d /= 10;
			}
			if (c == k)
			{
				if (c > max)
				{
					max = c;
				}
			}
		}

	}
	printf("%d\n", max);
	return 0;
}