/*C program to input and print text
using Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *text;

    printf("Enter limit of the text: ");
    scanf("%d",&n);


    text=(char*)malloc(n*sizeof(char));

    printf("Enter text: ");
    scanf(" ");
    gets(text);

    printf("Inputted text is: %s\n",text);


    free(text);

    return 0;
}
