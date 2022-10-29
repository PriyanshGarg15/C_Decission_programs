#include<stdio.h>
int main()
{
    char c ;
    int a;
    char B,T,C,S,M;
    int d,e,f;
    printf("enter type of vehicle \n For Bus=B \n For Truck=T \n For Car=C \n For Scooter=S \n For Motorcycle=M \n");
    scanf("%c",&c);
    printf("enter Number of hours vehicle stand for=");
    scanf("%d",&a);
    d=a*20;
    e=a*10;
    f=a*5;

    if(c=='B')
     printf("Your parking charge is=%d",(d));
    else if(c=='T')
     printf("Your parking charge is=%d",(d));
    else if(c=='C')
     printf("Your parking charge is=%d",(e));
    else
     printf("Your parking charge is=%d",(f));
}