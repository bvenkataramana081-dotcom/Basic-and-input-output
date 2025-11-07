//swap two number (without using varible)

#include<stdio.h>
int main ()
{
   int a,b;
   printf("ENTER  A NUMBER = ");
   scanf("%d",&a);
   printf("ENTER B NUMBER = ");
   scanf("%d",&b);


    a = a+b;
    b = a-b;
    a = a-b;

    printf("SWAP : %d\nSWAP :%d\n",a,b);

    return 0;
}