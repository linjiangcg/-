#include <stdio.h>

int main()
{
	_int64 i = 600851475143;
	int j, max = 0;

	for (; i != 1;)
	{	
		j = 2;
		while (i % j != 0)
		{
			j++;
		}
		if (j > max)
		{
			max = j;
		}
		i /= j;
	}

	printf("%d\n", max);
	return 0;
}