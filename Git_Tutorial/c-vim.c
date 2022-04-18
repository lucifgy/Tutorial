//This code opens/creates a txt file then directs it to vim
//TODO:
//Option to View or Edit file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char input[50];
  char ch;
  do {
    printf("1-71(0 exit): ");
    scanf("%s", input);
    strcat(input, ".txt");

    FILE *fp;
    fp = fopen(input, "r+");
    if (fp == NULL) fp = fopen(input, "w+");

    char cmd[50];
    strcpy(cmd, "vim ");
    system(strcat(cmd, input));

    fclose(fp);
  }while (input !=0 ); 
  return 0;
}
