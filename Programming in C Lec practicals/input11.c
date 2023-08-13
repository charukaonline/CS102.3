#include <stdio.h>

int main() {

    int no,counter=1,odd=0,even=0;

    while (counter<=10){
        printf("Enter %d number ",counter);
        scanf("%d",&no);

        if (no%2==0)
            even++;
            else
            odd++;

        counter++;
    }



    printf("Total odd numbers are %d \n",odd);
    printf("Total even numbers are %d \n",even);

    return 0;
}
