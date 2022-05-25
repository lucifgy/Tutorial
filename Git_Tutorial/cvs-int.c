//TODO:
//An algorithym to find out when the lamp gets turned on
//(when the graph starts peaking)
//put the limit before the peak
//add the numbers from first to last point
//Get the avarage
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	double row_a[2500];
	double row_b[2500];
	double row_c[2500];
	double row_d[2500];


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

			token = strtok(NULL, ",");
			d = atof(token);
			row_c[i-16] = d;

			token = strtok(NULL, ",");
			d = atof(token);
			row_d[i-16] = d;

		}	
	}
	fclose(fp);	

	FILE *fp_line;
	fp_line = fopen("line.txt", "w");
	for(i = 0; i < 2500; i++)
	{
		fprintf(fp_line, "%0.9f\t %0.6f\n", row_a[i], row_b[i]);
		//printf("%f\t %f\t %f\t %f\n", row_a[i], row_b[i], row_c[i], row_d[i]);
	}
	fclose(fp_line);

	system("gnuplot -p gp-script.gp");
	

	double sum = 0.0;

	for (i = 1; i < 2500; i++)
	{
		sum = sum + (row_d[i-1] * (row_a[i] - row_a[i-1])) + ((row_d[i] - row_d[i-1]) * (row_a[i] - row_a[i-1])) / 2 ;
	}
	printf("%0.14f\n", sum);

	return 0;
}
