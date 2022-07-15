#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
        printf("%d is divisible by 7 or by 3",a);
    else
        printf("%d is not divisible by 7 or by 3",a);
    return 0;
}
