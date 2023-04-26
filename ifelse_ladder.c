//program to relate two integers using =,> or < symbol 
#include <stdio.h>
main()
{
    int num1,num2;
    printf("enter two integers: ");
    scanf("%d %d",&num1,&num2);
 //checks if the two integers are equal
 if (num1 == num2)  {
    printf("result: %d = %d",num1,num2);
 } 
 //checks if num1 is greater than num2.
   else if (num1 > num2){
    printf("result: %d > %d",num1,num2);
   }
   //checks if both test expressions are false
   else{
    printf("result: %d < %d",num1,num2);
   }
}