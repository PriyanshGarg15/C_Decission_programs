#include<stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2;
    printf("enter your date of birth:-\n");
    printf("enter day=");
    scanf("%d",&d1);
    printf("enter month=");
    scanf("%d",&m1);
    printf("enter year=");
    scanf("%d",&y1);
    printf("enter today date:-\n");
    printf("enter day=");
    scanf("%d",&d2);
    printf("enter month=");
    scanf("%d",&m2);
    printf("enter year=");
    scanf("%d",&y2);
    if(d2>d1)
    {
      d2=d2-d1;
    }
     else
     {
      m2=m2-1;
      d2=d2+30;
      d2=d2-d1;
     }
    if(m2>m1)
     {
     m2=m2-m1;
     }
     else
      {
      y2=y2-1;
      m2=m2+12;
      m2=m2-m1;
      }
    y2=y2-y1;
    printf("your present age is:-\n");
    printf("year=%d\n",y2);
    printf("month=%d\n",m2);
    printf("day=%d\n",d2);


       

}