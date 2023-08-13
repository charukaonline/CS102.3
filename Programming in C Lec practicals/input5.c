#include <stdio.h>
int main()
{
     int no1,ans;
     printf("Enter a number ");
     scanf("%d",&no1);

     ans=no1%2;

     if(ans==0)
        printf("%d is an even \n",no1);
     else
        printf("%d is an odd \n",no1);

}
