#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr;  
   fptr = fopen("./txt.txt", "w"); 
   if (fptr == NULL)
   {
      printf("Error! in opening a file ");
      exit(1);
   }
   fprintf(fptr, "hello world"); 

   fclose(fptr);

   return 0;
}