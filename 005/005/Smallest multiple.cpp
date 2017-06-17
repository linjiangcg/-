#include <stdio.h>

int main()
{
	long long int a = 2520;
	int i;
	for (; ;)
	{
		i = 11;
		while (i <= 20)
		{
			if (a % i == 0)
			{
				i++;
			}
			else
			{
				break;
			}
			if (i == 21)
			{
				printf("%lld", a);

			}
		}
		if (i == 21)
		{
			break;
		}
		a = a + 20;
	}
	printf("\n");
	return 0;
}