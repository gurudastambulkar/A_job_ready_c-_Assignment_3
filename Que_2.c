#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x%5)
        printf("%d is not divisible by 5",x);
    else
        printf("%d is divisible by 5",x);
    return 0;
}
