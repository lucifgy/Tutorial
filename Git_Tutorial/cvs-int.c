//TODO:
//Get the avarage of first row
//Math Calculations 
//Testing
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	double row_a[3000];
	double row_b[3000];

	FILE *fp;
	fp = fopen("curt1.csv", "r");
	if (fp == NULL) return -1;
	
	char line[1024];
	int i;
	while (fgets(line, sizeof(line), fp))
	{
		i++;
		if (i >= 16 && i <= 2515) {
			char *token;

			token = strtok(line, ",");

			double d = atof(token);
			row_a[i-16] = d;

			token = strtok(NULL, ",");

			d = atof(token);
			row_b[i-16] = d;
		}	
	}
	fclose(fp);	

	for(i = 0; i <= 10; i++) printf("row_a %d is %0.9f\n", i, row_a[i]);
	for(i = 0; i <= 10; i++) printf("row_b %d is %0.6f\n", i, row_b[i]);

	return 0;
}
