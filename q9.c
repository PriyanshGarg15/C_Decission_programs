#include<stdio.h>
int main()
{
    int year;
    printf("enter the year you want to check whether a leap year or not=");
    scanf("%d",&year);
    if(year%4==0)
    {
      if(year%100==0)
        {
         if(year%400==0)
             printf("Its a leap year");
         else
             printf("Not a leap year");
        }
      else
        printf("leap year");
    }
    else
        printf("not a leap year");
    
      
}