#include<stdio.h>
int main()
{
    int n,rev=0,pal,r;
    printf("enter a number");
    scanf("%d",&n);
    pal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse of number is=%d",rev);
}