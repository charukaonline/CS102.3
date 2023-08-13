#include <stdio.h>

int main() {

    int no,counter=1,total=0;
    float avg;

    while (counter<=10){
        printf("Enter %d number ",counter);
        scanf("%d",&no);
        total=total+no;
        counter++;
    }


    avg=(float)total/10.0;

    printf("Average is %.2f \n",avg);

    return 0;
}
