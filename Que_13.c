#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)
        printf("%d is divisible by 3 and by 2",a);
    else
        printf("%d is not divisible by 3 and by 2",a);
    return 0;
}
