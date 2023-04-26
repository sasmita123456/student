//check whether an integer is odd or even
#include <stdio.h>
main()
{
    int num;
    printf("enter an integer:");
    scanf("%d",&num);
    //true if the remainder is 0
    if (num%2 == 0)
    {
        printf("%d is an even integer.",num);

    }
    else{
        printf("%d is an odd integer.",num);
    }

}