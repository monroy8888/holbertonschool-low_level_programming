#include <stdio.h>

int main(void)
{
	int z;

	for (z = 1 ; z <= 100 ; z++)
	{
		if (z % 3 == 0 && z % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (z % 3 == 0)
		{
			printf("Fizz ");
		}
		else if  (z % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (z >= 100)
		{
			printf("\n");
		}
		else
		{
			printf("%d ", z);
		}
	}
	printf("\n");
	return (0);
}
