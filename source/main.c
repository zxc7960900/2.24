#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int num;

	printf("Enter a integer: ");
	scanf_s("%d", &num);

	if (num % 2 == 1)
		printf("%d is odd number", num);
	else
		printf("%d is even number", num);

	system("pause");
	return 0;
}