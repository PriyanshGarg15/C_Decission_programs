#include<stdio.h>
int main()
{
    int sellp,costp,manp,n;
    float profper;
    float lossper;
    printf("enter maintannce price of product=");
    scanf("%d",&manp);
    printf("enter selling price and cost price=");
    scanf("%d %d",&sellp,&costp);
    n=costp+manp;
    if(sellp>n)
    {
     printf("profit is of=%d\n",(sellp-n));
     profper=((sellp-n)*100)/n;
     printf("profit percent is=%f",profper);
    }
    if(sellp<n)
    {
     printf("loss is of=%d\n",(n-sellp));
     lossper=((n-sellp)*100)/n;
     printf("loss percent is=%f",lossper);
    }

}