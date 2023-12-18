#include<stdio.h>
int main()
{
    char ch;
    printf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("uppercase alphabet");
    else if(ch>='a'&&ch<='z')
    printf("lowercase alphabet");
    else
    printf("not an alphabet");
}
