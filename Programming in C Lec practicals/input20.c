#include <stdio.h>

int main()
{
    int i,odd=0,even=0,arr[10];

    for(i=0;i<10;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
        printf("Total number of odds are %d\n",odd);
        printf("Total number of evens are %d\n",even);


}


