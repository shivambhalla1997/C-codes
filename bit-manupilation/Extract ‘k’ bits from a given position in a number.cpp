
#include <stdio.h>

int bitExtracted(int number, int k, int p)
{
	return (((1 << k) - 1) & (number >> (p - 1)));
}

// Driver code
int main()
{
	int number = 100, k = 6, p = 2;
	printf("The extracted number is %d", 
			bitExtracted(number, k, p));
	return 0;
}
