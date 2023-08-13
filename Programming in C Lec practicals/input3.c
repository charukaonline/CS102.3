#include <stdio.h>
int main()

{
    int itemno,quant;
    char desc[30];
    float price,tprice;

    printf("Enter item no ");
    scanf("%d",&itemno);
    printf("Enter the quantity ");
    scanf("%d",&quant);
    printf("Enter item description ");
    scanf("%s",&desc);
    printf("Enter item price ");
    scanf("%f",&price);

    tprice=(quant*price);

    printf("Item no %d \n",itemno);
    printf("Item description %s \n",desc);
    printf("Total price %.2f \n",tprice);

}
