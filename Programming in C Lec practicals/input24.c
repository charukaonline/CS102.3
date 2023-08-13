#include <stdio.h>
void input (int a, int b)
{
    int max;
    if (a>b)
        printf("%d is the highest number",a);
    else if (b>a)
        printf("%d is the highest number",b);
}
int main()
{
    input(80,70);
}
