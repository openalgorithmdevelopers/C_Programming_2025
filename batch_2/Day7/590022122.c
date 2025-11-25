/*
Write menu driven program using switch construct to provide options as:
									1)Read content from a file
									2)Write to a file
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int choice;
    char filename[100];
    char ch;
    FILE *fp;

    while (1) 
	{
        	printf("\n FILE OPERATION MENU \n");
        	printf("1. Read content from a file\n");
        	printf("2. Write to a file\n");
        	printf("3. Exit\n");
        	printf("Enter your choice: ");
        	scanf("%d", &choice);
        	getchar();

        	switch (choice)
		{

        	case 1:
            		printf("Enter filename to read: ");
            		scanf("%s", filename);

            		fp = fopen(filename, "r");
	           	if (fp == NULL)
			{
                		printf("Error: Unable to open file.\n");
                		break;
            		}

            		printf("\n File Content \n");
            		while ((ch = fgetc(fp)) != EOF)
			{
                		putchar(ch);
            		}
           		 fclose(fp);
           		 break;

        	case 2:
            	printf("Enter filename to write to: ");
            	scanf("%s", filename);
            	getchar();

            	fp = fopen(filename, "w");
            	if (fp == NULL)
		{
                	printf("Error: Unable to open file.\n");
                	break;
            	}

            	printf("Enter text to write (end with '$'): \n");

            	while ((ch = getchar()) != '$')
		{
                	fputc(ch, fp);
            	}

            	fclose(fp);
            	printf("Data written successfully.\n");
            	break;

        	case 3:
            	printf("Exiting program \n");
            	exit(0);

        	default:
            	printf("Invalid choice! Try again.\n");
       	 	}
    }

    return 0;
}
