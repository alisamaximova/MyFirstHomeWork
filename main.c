#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	char numeric;
	while((numeric = getchar()) != EOF // setting a condition for the entered variable
	      && numeric != '\n' 
	      && numeric != '\0')
	{
        	switch(numeric) 
        	{
        		case ' ':
        		case '-':
           			break; // ignoring spaces and the minus sign
        		case '0':
        		case '1':
        		case '2':
        		case '3':
        		case '4':
        		case '5':
        		case '6':
       	 		case '7':
        		case '8':
        		case '9':
            			printf("%c", numeric);
            			break;
        		case '.':
            			printf(" | "); // replacing characters
            			break; 
        		default:
            			printf("\n\nError\n\n"); // informing about an error
            			exit(-1);
		}
	}
	printf("\n");
	exit(0);
}
