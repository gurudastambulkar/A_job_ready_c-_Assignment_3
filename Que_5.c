#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c,b=0;
    printf("Enter a number ");
    scanf("%d",&a);
    c=a;
    while(c!=0)
    {
        c=c/10;
        b++;
    }
    if(b==3)
        printf("%d is a three digit number",a);
    else
        printf("%d is not a three digit number",a);
    return 0;
}
