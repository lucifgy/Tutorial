//This code opens/creates a txt file then directs it to vim
//TODO:
//Option to View or Edit file
//Input handling, only 0 to 71 input is allowed
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char input[10], dir[40];
  char ch;
  do {
    printf("1-71(0 exit): ");
    scanf("%s", input);
    if (strcmp(input, "0") == 0) exit(0);
    sprintf(dir, "Notes/%s%s", input, ".txt");

    FILE *fp;
    fp = fopen(dir, "r+");
    if (fp == NULL) fp = fopen(dir, "w+");

    char cmd[50];
    strcpy(cmd, "vim ");
    system(strcat(cmd, dir));

    fclose(fp);
  }while (1); 
  return 0;
}
