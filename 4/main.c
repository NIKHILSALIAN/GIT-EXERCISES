#include <stdio.h>
 
int main(void)
{
   int Dollars;
   float TAX_VALUE,total;
    printf("ENTER VALUE FOR RADIUS:\n");
    scanf("%d",&Dollars);
    TAX_VALUE=Dollars*0.05;
     total=TAX_VALUE+Dollars;
      printf("5 PERCENT Tax VAlue is :%f\n", total);

			

}
