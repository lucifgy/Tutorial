#include <stdio.h>
#include <stdlib.h>
#include "elib.h"

void gnuplot(char *input)
{
	FILE *fp;
  fp =	fopen("tmp.gp", "w");
	fprintf(fp, "%s",input);
	fclose(fp);
	system("gnuplot -p tmp.gp");
	system("rm tmp.gp");
}
