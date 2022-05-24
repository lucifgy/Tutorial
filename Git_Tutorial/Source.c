#include <stdio.h>

void boxes(int x){
	int i;
	for (i = 0; i <= x; i++)
		printf("[__]");
}

int main()
{
	boxes(5);

	return 0;
}
