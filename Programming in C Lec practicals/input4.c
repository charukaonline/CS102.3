#include <stdio.h>
int main()
{
    //declare the variables
    int num1,num2,add,sub,mult,devi,mod ;
    //input
    printf("Enter the first number ");
    scanf("%d",&num1);

    printf("Enter the second number ");
    scanf("%d",&num2);

    //process
    add=(num1+num2);
    sub=(num1-num2);
    mult=(num1*num2);
    devi=(num1/num2);
    mod=(num1%num2);

    //output
    printf("Addition is %d \n",add);
    printf("Substraction is %d \n",sub);
    printf("Multiplication is %d \n",mult);
    printf("Division is %d \n",devi);
    printf("Modulous is %d \n",mod);

}
