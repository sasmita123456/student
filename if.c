// program to display a number if it is negative
#include <stdio.h>
main(){
int num;
printf("enter an integer:");
scanf("%d",&num);
//true if number is less than 0
if (num<0)
{
    printf("You enterd %d.\n",num);
}
printf("The if statement is easy.");
}