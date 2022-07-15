#include<stdio.h>
int main()
{
    int a;
    printf("Enter a month number as given below:\n1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December ");
    scanf("%d",&a);
    if(a==1)
        printf("31 days in January");
    else if(a==2)
        printf("28 days in February");
    else if(a==3)
        printf("31 days in March");
    else if(a==4)
        printf("30 days in April");
    else if(a==5)
        printf("31 days in May");
    else if(a==6)
        printf("30 days in June");
    else if(a==7)
        printf("31 days in July");
    else if(a==8)
        printf("31 days in August");
    else if(a==9)
        printf("30 days in September");
    else if(a==10)
        printf("31 days in October");
    else if(a==11)
        printf("30 days in November");
    else if(a==12)
        printf("31 days in December");
    else
        printf("Invalid month");
    return 0;
}
