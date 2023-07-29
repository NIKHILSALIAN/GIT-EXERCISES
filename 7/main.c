#include <stdio.h>
 
int main(void)
{
   int n;
   int a,b,c,d,e,f,g,h,i;

   printf("ENTER BILL AMOUNT:\n");
   scanf("%d",&n);
   a=n/20;
   b=4*20;
   c=n-b;
   d=c/10;
   e=1*10;
   f=c-e;
   g=f/5;
   h=f-g;
   i=h/1;

   printf("20:%d",a);
   printf("\n10:%d",d);
   printf("\n5:%d",g);
   printf("\n1:%d",i);

  

			

}
