
#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("\n%u",&i);
    printf("\n%u",j);
    printf("\n%u",&j);
    printf("\n%u",k);
    printf("\n%u",&k);
    printf("\nvalue of j =%u",j);
    printf("\n value of =%u",k);
    printf("\nvalue of i=%d",i);
    printf("\nvalue of i=%d",i);
    printf("\nvalue of i=%d",i);
    printf("\nvalue of i=%d",i);
    return 0;

}
