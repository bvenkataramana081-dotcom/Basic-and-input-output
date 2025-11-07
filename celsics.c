//convert temparature celsius  and fahrenheit
#include<stdio.h>
int main ()
{
    int  sum,celsius;
    printf("ENTER celsius = ");
    scanf("%d",&celsius);

    sum = (celsius*9/5)+32;

    printf("fahrenheit = %d",sum);
    return 0;
}

