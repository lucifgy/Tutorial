//This code opens/creates a txt file then directs it to vim
//TODO:
//Loop the code
//Limit inputs between 1-71 or exit
//Option to View or Edit file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char input[50];
  char ch;

  printf("1-71: ");
  scanf("%s", input);
  strcat(input, ".txt");

	FILE *fp;
	fp = fopen(input, "r+");
 	if (fp == NULL) fp = fopen(input, "w+");

	/* for printing out what's written in the file
  do {
    ch = getc(fp);
    printf("%c", ch);
  } while (ch != EOF);
 	*/

	char cmd[50];
	strcpy(cmd, "vim ");
	system(strcat(cmd, input));

	/* prototype to choose what you want to do with the selected file
	 * Code above just directs it to vim 
  int yn;
  printf("\n 1 for edit, 0 for exit: ");
  scanf("%d", &yn);

  if(yn == 1){	
	char cmd[50];
	strcpy(cmd, "vim ");
	system(strcat(cmd, input));
	}


  else if(yn == 0) printf("no\n");
  else printf("What!?"); */

  fclose(fp);
  return 0;
}
