#include<stdio.h>
int main()
{
    char a;
    printf("Enter a alphabet ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("%c is in uppercase",a);
    else if(a>='a' && a<='z')
        printf("%c is in lowercase",a);
    else
        printf("Invalid");
    return 0;
}
