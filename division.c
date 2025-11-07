//compute the quotient and  remainder

#include<stdio.h>
int main ()
{
    int a,b;
    int c,d;
   printf("ENTER HOW MANY NUMBER :");
   scanf("%d",&a);
   printf("ENTER HOW MANY :");
   scanf("%d",&b);

   c = a/b;
   d = a%b;

   printf("quotient = %d\nremainder = %d\n ",c,d);
    return 0;
}