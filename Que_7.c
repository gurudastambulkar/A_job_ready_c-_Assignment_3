#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter quadratic values of a,b and c ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*(a*c));
    if(d<0)
        printf("The quadratic equation has two real and distinctive roots");
    else if(d<0)
        printf("The quadratic equation has imaginary roots");
    else
        printf("The quadratic equation has two real and equal roots");
    return 0;
}
