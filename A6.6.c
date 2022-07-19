//factorial of a number
#include<stdio.h>
int main()
   {
      int n,fa=1,i;
      printf("enter a number\n");
      scanf("%d",&n);
      for(;n>=1;n--)
      {

        fa=fa*n;

      }
      printf("factorial is %d",fa);
      return 0;
   }
