// sum of cubes of first N natural numbers

#include<stdio.h>
int main()
   {
     int i,n,s=0;
     printf("Enter a number\n");
     scanf("%d",&n);
     printf(" Sum of Cubes of first %d natural numbers are :\n",n);
     for(i=1;i<=n;i++)
     {
         s=s+i*i*i;
     }

          printf("%d\n",s);


        return 0;
   }
