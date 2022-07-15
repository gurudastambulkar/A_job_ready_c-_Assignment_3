#include<stdio.h>
#include<conio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,p;
    printf("Enter marks of English, Science, Computer, Math, History ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
    {
        p=(sub1+sub2+sub3+sub4+sub5)/5;
        if(p>=75)
            printf("Distinctive\n");
        else if(p>=60)
            printf("First class\n");
        else if(p>=45)
            printf("Second class\n");
        else
            printf("Needs improvement\n");
        printf("PASSES");
    }
    else
        printf("FAIL");
    return 0;
}
