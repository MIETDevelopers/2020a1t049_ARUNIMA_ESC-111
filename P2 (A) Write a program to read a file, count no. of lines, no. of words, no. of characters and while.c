#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char ch;
    int nol=0,nos=0,noc=0,now=0;
    fptr = fopen("PROGRAM.txt", "r");
    while(1)
    {
        ch=fgetc(fptr);
        if (ch==EOF)
        break;
        else
        {
            noc++;
            if (ch==' ')
            nos++;
            else if (ch=='\n')
            nol++;
            else
            now++;
        }
    }
    fclose(fptr);
    printf("Total No. of Characters =%d\n" , noc);
    printf("Total No. of spaces =%d\n" , nos);
    printf("Total No. of lines =%d\n" , nol);
    printf("Total No. of words =%d\n" , now);
    return 0;
}