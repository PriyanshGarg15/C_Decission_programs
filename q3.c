#include<stdio.h>
int main()
{
    float units,charge;
    printf("Number of units consumed by the use=");
    scanf("%f",&units);
    if (units>=0 && units<=50)
     charge=0.50*units;
    else if(units>50 && units<=150)
     charge=(25+0.75*(units-50));
    else if(units>150 && units<=250)
     charge=(25+75+1.20*(units-150));
    else if(units>250)
     charge=(25+75+120+1.50*(units-250));
    printf("Your electricity bill is of=%.2f",charge+(0.20*charge));
}