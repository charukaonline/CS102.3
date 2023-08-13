#include <stdio.h>

int main()
{
    int i, arr[10];
    //input
    for(i=0;i<10;i++)
    {
        printf("Enter a value to the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    //display
    for(i=0;i<10;i++)
        printf("%d",arr[i]);

}

