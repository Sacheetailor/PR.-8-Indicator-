
#include<stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("enter string :");
    gets(str);

    ptr = str;

    while(*ptr !='\0')
    {
        length++;
        ptr++;
    }
   
    printf("the length of string is:%d",length);
    
    return 0;
}
