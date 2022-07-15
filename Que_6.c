#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is a greater number",a);
    else if(b>a)
        printf("%d is a greater number",b);
    else
        printf("%d both are same",a);
    return 0;
}
