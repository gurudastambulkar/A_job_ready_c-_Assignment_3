#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter sides of a triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c)
        printf("Triangle is valid");
    else
        printf("Triangle is invalid");
    return 0;
}
