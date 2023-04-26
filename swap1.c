#include<stdio.h>
main()
{
    int num1,num2;
    printf("enter two number:");
    scanf("%d%d",&num1,&num2);
    printf("before swapping %d ",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("after swapping %d",num1,num2);
}