#include <stdio.h>
main()
{
    int i ,n,j,k;
    printf("enter a number: ");
    scanf("%d",&n);
    i=0;
    j=1;
    printf("%d %d",i,j);
    k=i+j;
    while(k<=n)
    {
        printf(" %d",k);
        i=j;
        j=k;
        k=i+j;
    }
}