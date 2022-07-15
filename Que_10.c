#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,p,l,pp,lp;
    printf("Enter cost price and selling price ");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    pp=(p/cp)*100;
    lp=(l/cp)*100;
    printf("Profit %% is %f\nLoss %% is %f",pp,lp);
    return 0;
}
