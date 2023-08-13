#include <stdio.h>
int main()
{
    float bs,ns,inc;
    char name[30];

    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your basic salary: ");
    scanf("%f",&bs);

    if (bs<5000)
        inc=(bs/100)*5;
    else if (bs>=5000 && bs<10000)
        inc=(bs/100)*10;
    else if (bs>=10000)
        inc=(bs/100)*15;

    ns=bs+inc;

    printf("Employee name: %s\n",name);
    printf("New salary: %.2f",ns);

}
