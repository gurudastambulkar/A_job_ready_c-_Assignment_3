#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter any one character ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("%c is in uppercase",a);
    else if(a>='a' && a<='z')
        printf("%c is in lowercase",a);
    else if(a>='0' && a<='9')
        printf("%c is a digit",a);
    else
        printf("%c is a special character",a);
    return 0;
}
