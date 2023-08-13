#include <stdio.h>

int main()
{
    float prices[10];
    int i;
    float sum=0,avg,max=0;

    for(i=0;i<10;i++)
    {
        printf("Enter a value to the price %d: ",i+1);
        scanf("%f",&prices[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+prices[i];
        printf("The prices of product %d is %.2f\n",i+1,prices[i]);
        if (prices[i]>max)
        max=prices[i];
    }
    avg=sum/10.0;
    printf("Average is %.2f\n",avg);
    printf("Highest price is %.2f\n",max);

}


