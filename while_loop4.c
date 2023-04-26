#include <stdio.h>
main()
{
    int no, nd, sd, rem;
    printf("enter a number: ");
    scanf("%d",&no);
    nd=0;
    sd=0;
    while(no>0)
    {
        rem = no % 10;
        nd = nd + 1;
        sd = sd + rem;
        no = no / 10;
    }
    printf("the number of digit is %d",nd);
    printf("\nthe sum of digit is %d",sd);
}