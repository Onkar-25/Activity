#include<stdio.h>
main()
{
    int units;
   float total_bill;
   printf("Enter the number of units consumed for one month = ");
    scanf("%d",&units);
   

    if(units<=30)
    {
        total_bill=3.25*units;
    }
    else if(units>30 && units <=100)
    {
        total_bill=3.25*30+4.40*(units-30);
    }
    else if(units>100 && units<=200)
    {
        total_bill=3.25*30+4.40*70+6.25*(units-100);
    }
   else
    {
        total_bill=3.25*30+4.40*70+6.25*100+7.30*(units-200);
    }
    printf("\nTotal monthly bill = %.2f",total_bill);
}
