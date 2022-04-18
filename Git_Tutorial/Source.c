#include <stdio.h>

 int main()
{
	int var = 1;
	int *ptr;
	
	ptr = &var;

	printf("Direct access: %d\n", var);
	printf("Indirect access: %d\n", *ptr);
	
	printf("Adress: %d\n", &var);
	printf("Adress: %d\n", ptr);

	*ptr = 48;
	printf("Indirect: %d\n", *ptr);

	return 0;
}
