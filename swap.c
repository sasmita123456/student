#include <stdio.h>
main()
{
    int temp,num1,num2;
    printf("enter two number:");
    scanf("%d%d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("after swapping %d",num1,num2);

}