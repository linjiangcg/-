#include <stdio.h>

int main()
{
	int i = 1;
	int product = 1;
	int result1 = 0;    //ƽ���ĺ�
	int sum = 0;
	int result2;        //�͵�ƽ�� 
	int difference;     

	for (; i <= 100; i++)
	{
		product = i * i;
		result1 += product;
		sum += i;
	}

	result2 = sum * sum;
	difference = result1 - result2;

	if (difference < 0)
	{
		difference = -difference;
	}
	printf("%d", difference);

	return 0;
}