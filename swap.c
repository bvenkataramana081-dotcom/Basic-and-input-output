// swap two number 

#include<stdio.h>
int main ()
{
    int a,b;
    int temp;
    printf("ENTER FIRST SWAP NUMBER :");
    scanf("%d",&a);
    printf("ENTER SECOUND SWAP NUMBER :");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("SWAP  = %d\nSWAP = %d\n ",a,b);

    return 0;
}