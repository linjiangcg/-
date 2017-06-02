#include <stdio.h>
#define N 50

int main()
{
	int a[N];
	int i = 1;
	int n = 0;
	a[0] = 1;
	a[1] = 2;
	for (; a[i] < 4000000; )
	{
		if (a[i] % 2 == 0)
		{
			n += a[i];
		}
		i++;
		a[i] = a[i - 1] + a[i - 2];
	}

	printf("%d\n", n);
	return 0;
}