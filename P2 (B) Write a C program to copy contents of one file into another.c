#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	FILE *fptr;
	FILE *fptr2;
	char c;
	fptr = fopen("PROGRAM.txt","r");
	if (fptr == NULL)
	{
		printf("FIle could not be opened\n");
	} else{
		fptr2 = fopen("PROGRAM_2.txt","w");
		if (fptr2 == NULL)
		{
			printf("FIle could not be opened\n");
		} else{
			c=fgetc(fptr);
			while(c != EOF){
				fputc(c, fptr2);
				c=fgetc(fptr);
			}
			printf("done...\n");
			fclose(fptr2);
		}
		fclose(fptr);
	}
	return 0;
} 