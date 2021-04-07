#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cha[100];
   FILE *fptr;
   if ((fptr = fopen("./txt.txt","r")) == NULL)
   {
       printf("Error! opening file");
       exit(1);
   }

   fscanf(fptr, "%[^\n]", cha);
   printf("%s", cha);
   fclose(fptr); 
  
   return 0;
}