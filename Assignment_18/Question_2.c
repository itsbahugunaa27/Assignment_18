#include<stdio.h>
#include<string.h>
void reverse(char ch[])
{
    int len,temp;
    len=strlen(ch);
    for(int i=0;i<len/2;i++)
    {
        temp=ch[i];
        ch[i]=ch[len-i-1];
        ch[len-i-1]=temp;
    }
}
int main()
{
    char s[20];
    printf("Enter a string\n");
    gets(s);
    reverse(s);
    printf("%s ",s);
    return 0;
}
