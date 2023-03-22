#include<stdio.h>
int length(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
         count++;
    }
    return count;
}
int main()
{
    char l[20];
    printf("Enter a string\n");
    gets(l);
    printf("Length of a string is %d ",length(l));
    return 0;
}
