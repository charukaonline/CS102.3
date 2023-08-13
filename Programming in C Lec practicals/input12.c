#include <stdio.h>

int main() {

    int no,counter=1,pos=0,neg=0,zer=0;

    while (counter<=20){
        printf("Enter %d number ",counter);
        scanf("%d",&no);

        if (no>0)
            pos++;
            else if (no<0)
            neg++;
            else
                zer++;

        counter++;
    }



    printf("Total positive numbers are %d \n",pos);
    printf("Total negative numbers are %d \n",neg);
    printf("Total zeros are %d \n",zer);

    return 0;
}
