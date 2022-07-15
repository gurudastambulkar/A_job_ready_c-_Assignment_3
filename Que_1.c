#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a>0)
        printf("%d is a positive number",a);
    else
        printf("%d is a non positive number",a);
    return 0;
}
