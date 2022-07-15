#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y=1;
    printf("Enter a number ");
    scanf("%d",&x);
    while(x>=y)
    {
        if(x==y)
        {
            printf("%d is a odd number",x);
            break;
        }
        else
            y=y+2;
    }
    if(x!=y)
        printf("%d is a even number",x);
    return 0;
}
